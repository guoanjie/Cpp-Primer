#include <iostream>
#include <map>
#include <string>

int main() {
    std::multimap<std::string, std::string> children;
    for (std::string family, child; std::cin >> family >> child;)
        children.insert({family, child});
    for (const auto &f : children)
        std::cout << f.first << '\t' << f.second << std::endl;
    return 0;
}
