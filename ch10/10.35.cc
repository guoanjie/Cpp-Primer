#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::istream_iterator<int> is_iter(std::cin), eof;
    std::vector<int> vi(is_iter, eof);
    std::ostream_iterator<int> os_iter(std::cout, " ");
    for (auto it = vi.cend(); it != vi.cbegin();)
        os_iter = *--it;
    std::cout << std::endl;
    return 0;
}
