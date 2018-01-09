#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::vector<int>::const_iterator find(
        std::vector<int>::const_iterator beg,
        std::vector<int>::const_iterator end,
        int value) {
    for (auto it = beg; it != end; ++it) {
        if (*it == value)
            return it;
    }
    return end;
}

int main() {
    std::string s;
    getline(std::cin, s);
    std::stringstream ss(s);
    std::vector<int> vi;
    int i, value;
    while (ss >> i)
        vi.push_back(i);
    std::cin >> value;
    auto it = find(vi.cbegin(), vi.cend(), value);
    if (it == vi.cend())
        std::cout << -1 << std::endl;
    else
        std::cout << it - vi.cbegin() << std::endl;
    return 0;
}
