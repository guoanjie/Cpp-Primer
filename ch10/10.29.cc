#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main() {
    std::ifstream is("10.29.in");
    std::istream_iterator<std::string> is_iter(is), eof;
    std::vector<std::string> vs(is_iter, eof);
    std::ostream_iterator<std::string> os_iter(std::cout, " ");
    copy(vs.cbegin(), vs.cend(), os_iter);
    std::cout << std::endl;
    return 0;
}
