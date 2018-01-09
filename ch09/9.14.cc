#include <iostream>
#include <list>
#include <string>
#include <vector>

int main() {
    std::list<char*> lpc = {"Milton", "Shakespeare", "Austen"};
    std::vector<std::string> vs;
    vs.assign(lpc.cbegin(), lpc.cend());
    for (const auto &s : vs)
        std::cout << s << " ";
    std::cout << std::endl;
    return 0;
}
