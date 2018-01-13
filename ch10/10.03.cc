#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> vi;
    for (int i; std::cin >> i;)
        vi.push_back(i);
    std::cout << accumulate(vi.cbegin(), vi.cend(), 0) << std::endl;
    return 0;
}
