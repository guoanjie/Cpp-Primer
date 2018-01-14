#include <iostream>
#include <list>
#include <vector>

int main() {
    std::vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> v0, v1;
    std::list<int> li;
    copy(vi.cbegin(), vi.cend(), inserter(v0, v0.begin()));
    for (auto i : v0)
        std::cout << i << " ";
    std::cout << std::endl;
    copy(vi.cbegin(), vi.cend(), back_inserter(v1));
    for (auto i : v1)
        std::cout << i << " ";
    std::cout << std::endl;
    copy(vi.cbegin(), vi.cend(), front_inserter(li));
    for (auto i : li)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
