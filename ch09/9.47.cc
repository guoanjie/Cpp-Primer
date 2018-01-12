#include <iostream>
#include <string>

const std::string ascii_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
const std::string digits = "0123456789";

void find_first_of(const std::string &s) {
    for (size_t pos = 0; pos != std::string::npos; ++pos) {
        pos = s.find_first_of(digits, pos);
        if (pos != std::string::npos)
            std::cout << s[pos];
        else
            break;
    }
    std::cout << std::endl;
    for (size_t pos = 0; pos != std::string::npos; ++pos) {
        pos = s.find_first_of(ascii_letters, pos);
        if (pos != std::string::npos)
            std::cout << s[pos];
        else
            break;
    }
    std::cout << std::endl;
}

void find_first_not_of(const std::string &s) {
    for (size_t pos = 0; pos != std::string::npos; ++pos) {
        pos = s.find_first_not_of(ascii_letters, pos);
        if (pos != std::string::npos)
            std::cout << s[pos];
        else
            break;
    }
    std::cout << std::endl;
    for (size_t pos = 0; pos != std::string::npos; ++pos) {
        pos = s.find_first_not_of(digits, pos);
        if (pos != std::string::npos)
            std::cout << s[pos];
        else
            break;
    }
    std::cout << std::endl;
}

int main() {
    std::string s = "ab2c3d7R4E6";
    find_first_of(s);
    find_first_not_of(s);
    return 0;
}
