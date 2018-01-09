#include <iostream>
#include <list>
#include <vector>

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::list<int> li(std::begin(ia), std::end(ia));
    std::vector<int> vi(std::begin(ia), std::end(ia));
    for (auto it = li.begin(); it != li.end();) {
        if (*it % 2)
            it = li.erase(it);
        else
            ++it;
    }
    for (auto it = vi.begin(); it != vi.end();) {
        if (*it % 2)
            ++it;
        else
            it = vi.erase(it);
    }
    for (auto i : li)
        std::cout << i << " ";
    std::cout << std::endl;
    for (auto i : vi)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
