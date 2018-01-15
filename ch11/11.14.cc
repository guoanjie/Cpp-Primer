#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    std::map<std::string, std::vector<std::pair<std::string, std::string>>> children;
    for (std::string family, child, birthday; std::cin >> family >> child >> birthday;)
        children[family].push_back({child, birthday});
    for (const auto &f : children) {
        std::cout << f.first << ":" << std::endl;
        for (const auto &c : f.second)
            std::cout << '\t' << c.first << '\t' << c.second << std::endl;
        std::cout << std::endl;
    }
    return 0;
}
