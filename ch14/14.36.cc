#include <iostream>
#include <vector>

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
    std::vector<std::string> vs;
    while (std::cin)
        vs.push_back(ps(std::cin));
    for (const auto &s : vs)
        std::cout << s << std::endl;
    return 0;
}
