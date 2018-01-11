#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<char> vc;
    for (char c; std::cin >> c;)
        vc.push_back(c);
    std::string s(vc.cbegin(), vc.cend());
    std::cout << s << std::endl;
    return 0;
}
