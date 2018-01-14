#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::istream_iterator<int> is_iter(std::cin), eof;
    std::vector<int> vi(is_iter, eof);
    std::sort(vi.begin(), vi.end());
    std::ostream_iterator<int> os_iter(std::cout, " ");
    std::copy(vi.cbegin(), vi.cend(), os_iter);
    std::cout << std::endl;
    return 0;
}
