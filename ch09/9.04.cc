#include <iostream>
#include <sstream>
#include <string>
#include <vector>

bool find(
        std::vector<int>::const_iterator beg,
        std::vector<int>::const_iterator end,
        int value) {
    for (auto it = beg; it != end; ++it) {
        if (*it == value)
            return true;
    }
    return false;
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
    std::cout << find(vi.cbegin(), vi.cend(), value) << std::endl;
    return 0;
}
