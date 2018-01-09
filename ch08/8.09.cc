#include <iostream>
#include <sstream>
#include <string>

std::istream &read(std::istream &is) {
    std::string s;
    while (is >> s)
        std::cout << s << " ";
    std::cout << std::endl;
    is.clear();
    return is;
}

int main() {
    std::string s;
    getline(std::cin, s);
    std::istringstream iss(s);
    read(iss);
    return 0;
}
