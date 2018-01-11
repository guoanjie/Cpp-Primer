#include <iostream>
#include <string>

std::string replaceAll(std::string s, std::string oldVal, std::string newVal) {
    auto found = s.find(oldVal);
    while (found != std::string::npos) {
        std::cout << found << std::endl;
        auto first = s.begin() + found;
        first = s.erase(first, first + oldVal.size());
        s.insert(first, newVal.cbegin(), newVal.cend());
        found = s.find(oldVal, found + newVal.size());
    }
    return s;
}

int main() {
    std::string s, oldVal, newVal;
    getline(std::cin, s);
    getline(std::cin, oldVal);
    getline(std::cin, newVal);
    std::cout << replaceAll(s, oldVal, newVal) << std::endl;
    return 0;
}
