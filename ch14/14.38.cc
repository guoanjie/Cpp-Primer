#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>

class TestLen {
public:
    TestLen(size_t l, size_t u) : lb(l), ub(u) { }
    bool operator()(std::string s) {
        return s.length() >= lb && s.length() <= ub;
    }

private:
    size_t lb;
    size_t ub;
};

int main() {
    std::istream_iterator<std::string> beg(std::cin), end;
    std::cout << std::count_if(beg, end, TestLen(1, 10)) << std::endl;
    return 0;
}
