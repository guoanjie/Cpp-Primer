#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> ds;
    std::string s;
    while (std::cin >> s)
        ds.push_back(s);
    for (auto it = ds.cbegin(); it != ds.cend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    return 0;
}
