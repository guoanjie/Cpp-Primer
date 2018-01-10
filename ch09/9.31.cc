#include <forward_list>
#include <iostream>
#include <list>
#include <vector>

int main() {
    std::vector<int> vi;
    for (int i; std::cin >> i;)
        vi.push_back(i);
    std::list<int> li(vi.cbegin(), vi.cend());
    std::forward_list<int> fli(vi.cbegin(), vi.cend());

    auto iter = li.begin();
    while (iter != li.end()) {
        if (*iter % 2) {
            iter = li.insert(iter, *iter);
            ++++iter;
        } else
            iter = li.erase(iter);
    }

    auto prev = fli.before_begin();
    auto curr = fli.begin();
    while (curr != fli.end()) {
        if (*curr % 2) {
            curr = fli.insert_after(curr, *curr);
            prev = curr;
            ++curr;
        } else
            curr = fli.erase_after(prev);
    }

    for (auto i : li)
        std::cout << i << " ";
    std::cout << std::endl;

    for (auto i : fli)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
