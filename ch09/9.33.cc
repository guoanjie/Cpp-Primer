#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    for (int i; std::cin >>i;)
        v.push_back(i);

    auto begin = v.begin();
    while (begin != v.end()) {
        ++begin;
        v.insert(begin, 42);    // begin is invalidated
        ++begin;
    }

    for (auto i : v)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
