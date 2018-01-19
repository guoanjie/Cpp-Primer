#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class StrBlobPtr;

class StrBlob {
    friend class StrBlobPtr;
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const std::string &t) { data->push_back(t); }
    void pop_back();
    std::string& front() { return get_front(); }
    const std::string& front() const { return get_front(); }
    std::string& back() { return get_back(); }
    const std::string& back() const { return get_back(); }
    StrBlobPtr begin();
    StrBlobPtr end();
private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
    std::string& get_front() const;
    std::string& get_back() const;
};

StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()) { }

StrBlob::StrBlob(std::initializer_list<std::string> il) :
        data(std::make_shared<std::vector<std::string>>(il)) { }

void StrBlob::check(size_type i, const std::string &msg) const {
    if (i >= data->size())
        throw std::out_of_range(msg);
}

std::string& StrBlob::get_front() const {
    check(0, "front on empty StrBlob");
    return data->front();
}

std::string& StrBlob::get_back() const {
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) { }
    std::string& deref() const;
    StrBlobPtr& incr();
private:
    std::shared_ptr<std::vector<std::string>>
        check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};

StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end() { return StrBlobPtr(*this, data->size()); }

std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(std::size_t i, const std::string &msg) const {
    auto ret = wptr.lock();
    if (!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if (i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}

std::string& StrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

int main(int argc, char *argv[]) {
    std::ifstream is(argv[1]);
    StrBlob b;
    for (std::string s; getline(is, s);)
        b.push_back(s);
    auto beg = b.begin();
    for (int i = 0; i < b.size(); ++i, beg.incr())
        std::cout << beg.deref() << std::endl;
    return 0;
}
