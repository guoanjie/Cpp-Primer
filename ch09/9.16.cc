#include <iostream>
#include <list>
#include <sstream>
#include <vector>

int main() {
    std::list<int> li;
    std::vector<int> vi;
    std::istringstream iss;
    std::string s;
    int i;

    getline(std::cin, s);
    iss.clear();
    iss.str(s);
    while (iss >> i)
        li.push_back(i);

    getline(std::cin, s);
    iss.clear();
    iss.str(s);
    while (iss >> i)
        vi.push_back(i);

    decltype(vi) vli(li.cbegin(), li.cend());
    std::cout << (vli == vi) << std::endl;

    return 0;
}
