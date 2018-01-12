#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> vs;
    for (std::string s; std::cin >> s;)
        vs.push_back(s);
    double sum = 0;
    for (auto s : vs)
        sum += stod(s);
    std::cout << sum << std::endl;
    return 0;
}
