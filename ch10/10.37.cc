#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main() {
    std::vector<int> vi(10);
    for (auto &i : vi)
        std::cin >> i;
    decltype(vi.crbegin()) beg(vi.cbegin() + 7 + 1), end(vi.cbegin() + 3);
    std::list<int> li(beg, end);
    std::ostream_iterator<int> os_iter(std::cout, " ");
    std::copy(li.cbegin(), li.cend(), os_iter);
    std::cout << std::endl;
}
