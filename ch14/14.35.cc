#include <iostream>

class PrintString {
public:
    std::string operator()(std::istream &is) {
        std::string s;
        if (getline(is, s))
            return s;
        else
            return "";
    }
};

int main() {
    PrintString ps;
    while (std::cin)
        std::cout << ps(std::cin) << std::endl;
    return 0;
}
