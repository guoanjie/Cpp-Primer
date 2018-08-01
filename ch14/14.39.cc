#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

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
    std::vector<std::string> vs(beg, end);
    size_t count = std::count_if(vs.cbegin(), vs.cend(), TestLen(1, 9));
    std::cout << count << '\t' << vs.size() - count << std::endl;
    return 0;
}
