#include <iostream>
#include <vector>

int main() {
    std::vector<int> vi;
    for (int i; std::cin >> i;)
        vi.push_back(i);
    fill_n(vi.begin(), vi.size(), 0);
    for (auto i : vi)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
