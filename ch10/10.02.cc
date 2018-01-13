#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::string val;
    std::cin >> val;
    std::vector<std::string> vi;
    for (std::string s; std::cin >> s;)
        vi.push_back(s);
    std::cout << count(vi.cbegin(), vi.cend(), val) << std::endl;
    return 0;
}
