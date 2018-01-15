#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <string>

int main() {
    std::istream_iterator<std::string> is_iter(std::cin), eof;
    std::list<std::string> ls(is_iter, eof);
    ls.sort();
    auto end = std::unique(ls.begin(), ls.end());
    std::ostream_iterator<std::string> os_iter(std::cout, " ");
    std::copy(ls.begin(), end, os_iter);
    std::cout << std::endl;
    return 0;
}
