#include <iostream>
#include <string>

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &orig):
        ps(new std::string(*orig.ps)), i(orig.i) { }
    HasPtr& operator=(const HasPtr &rhs) {
        ps = new std::string(*rhs.ps);
        i = rhs.i;
        return *this;
    }
    ~HasPtr() { delete ps; }
private:
    std::string *ps;
    int i;
};

int main() {
    HasPtr hp("13.11"), ass;
    ass = hp;
    return 0;
}
