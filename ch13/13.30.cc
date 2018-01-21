#include <algorithm>
#include <iostream>
#include <string>

class HasPtr {
    friend void swap(HasPtr&, HasPtr&);
public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &orig):
        ps(new std::string(*orig.ps)), i(orig.i) { }
    HasPtr& operator=(HasPtr);
    ~HasPtr() { delete ps; }
private:
    std::string *ps;
    int i;
};

inline void swap(HasPtr &lhs, HasPtr &rhs) {
    std::cout << "void swap(HasPtr&, HasPtr&)" << std::endl;
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

HasPtr& HasPtr::operator=(HasPtr rhs) {
    swap(*this, rhs);
    return *this;
}

int main() {
    HasPtr hp("13.30"), ass;
    ass = hp;
    return 0;
}
