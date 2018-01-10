#include <forward_list>
#include <iostream>
#include <string>

void insert_after(
        std::forward_list<std::string> &fls,
        const std::string &sf,
        const std::string &si
) {
    auto prev = fls.before_begin();
    auto curr = fls.begin();
    while (curr != fls.end()) {
        if (*curr == sf) {
            fls.insert_after(curr, si);
            return;
        } else {
            prev = curr;
            ++curr;
        }
    }
    fls.insert_after(prev, si);
}

int main() {
    std::forward_list<std::string> fls{"s1", "s2", "s3"};
    for (const auto &s : fls)
        std::cout << s << " ";
    std::cout << std::endl;
    insert_after(fls, "s2", "s4");
    for (const auto &s : fls)
        std::cout << s << " ";
    std::cout << std::endl;
    insert_after(fls, "s5", "s6");
    for (const auto &s : fls)
        std::cout << s << " ";
    std::cout << std::endl;
    return 0;
}
