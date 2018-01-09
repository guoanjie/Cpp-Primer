#include <deque>
#include <iostream>
#include <list>

int main() {
    std::list<int> li;
    int i;
    while (std::cin >> i)
        li.push_back(i);
    std::deque<int> even, odd;
    for (auto e : li) {
        if (e % 2)
            odd.push_back(e);
        else
            even.push_back(e);
    }
    for (auto e : even)
        std::cout << e << " ";
    std::cout << std::endl;
    for (auto e : odd)
        std::cout << e << " ";
    std::cout << std::endl;
    return 0;
}
