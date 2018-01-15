#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main() {
    std::vector<std::pair<std::string, int>> sequence;
    std::string s;
    int i;
    while (std::cin >> s >> i)
        sequence.push_back({s, i});
    for (const auto &p : sequence)
        std::cout << p.first << " " << p.second << std::endl;
    return 0;
}
