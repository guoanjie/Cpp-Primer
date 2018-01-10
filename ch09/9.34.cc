#include <iostream>
#include <vector>

int main() {
    std::vector<int> vi;
    for (int i; std::cin >> i;)
        vi.push_back(i);
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
            ++iter;
        }
        ++iter;
    }
    for (auto i : vi)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
