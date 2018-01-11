#include <iostream>
#include <string>

std::string replaceAll(std::string s, std::string oldVal, std::string newVal) {
    auto found = s.find(oldVal);
    while (found != std::string::npos) {
        s.replace(found, oldVal.size(), newVal);
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
