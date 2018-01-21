#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class HasPtr {
    friend void swap(HasPtr&, HasPtr&);
public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &orig):
        ps(new std::string(*orig.ps)), i(orig.i) { }
    HasPtr& operator=(HasPtr);
    bool operator<(const HasPtr &rhs) const { return *ps < *rhs.ps; }
    ~HasPtr() { delete ps; }
private:
    std::string *ps;
    int i;
};

inline void swap(HasPtr &lhs, HasPtr &rhs) {
    std::cout << "swap " << *lhs.ps << " and " << *rhs.ps << std::endl;
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

HasPtr& HasPtr::operator=(HasPtr rhs) {
    swap(*this, rhs);
    return *this;
}

int main() {
    std::vector<HasPtr> vhp;
    for (std::string s; std::cin >> s;)
        vhp.emplace_back(s);
    std::sort(vhp.begin(), vhp.end());
    return 0;
}
