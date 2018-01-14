#include <iostream>
#include <list>
#include <vector>

int main() {
    std::vector<int> vi;
    for (int i; std::cin >> i;)
        vi.push_back(i);
    sort(vi.begin(), vi.end());
    std::list<int> li;
    unique_copy(vi.cbegin(), vi.cend(), front_inserter(li));
    for (auto i : li)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
