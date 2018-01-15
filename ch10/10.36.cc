#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::istream_iterator<int> is_iter(std::cin), eof;
    std::vector<int> vi(is_iter, eof);
    auto it = std::find(vi.crbegin(), vi.crend(), 0);
    std::cout << *it << std::endl;
    return 0;
}
