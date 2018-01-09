#include <iostream>
#include <list>
#include <vector>

int main() {
    int i;
    std::list<int> li;
    while (std::cin >> i)
        li.push_back(i);
    std::vector<double> vd1(li.cbegin(), li.cend());
    std::vector<int> vi(li.cbegin(), li.cend());
    std::vector<double> vd2(vi.cbegin(), vi.cend());
    for (auto d : vd1)
        std::cout << d << " ";
    std::cout << std::endl;
    for (auto d : vd2)
        std::cout << d << " ";
    std::cout << std::endl;
    return 0;
}
