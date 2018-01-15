#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    std::map<std::string, std::vector<std::string>> children;
    for (std::string family, child; std::cin >> family >> child;)
        children[family].push_back(child);
    for (const auto &f : children) {
        std::cout << f.first << ":\t";
        for (const auto &c : f.second)
            std::cout << c << " ";
        std::cout << std::endl;
    }
    return 0;
}
