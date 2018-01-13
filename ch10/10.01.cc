#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int val;
    std::cin >> val;
    std::vector<int> vi;
    for (int i; std::cin >> i;)
        vi.push_back(i);
    std::cout << count(vi.cbegin(), vi.cend(), val) << std::endl;
    return 0;
}
