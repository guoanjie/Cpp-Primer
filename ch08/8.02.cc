#include <iostream>
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
    read(std::cin);
    return 0;
}
