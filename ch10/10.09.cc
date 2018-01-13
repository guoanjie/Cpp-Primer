#include <iostream>
#include <string>
#include <vector>

void elimDups(std::vector<std::string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    for (auto word : words)
        std::cout << word << " ";
    std::cout << std::endl;
    words.erase(end_unique, words.end());
}

int main() {
    std::vector<std::string> vs;
    for (std::string s; std::cin >> s;)
        vs.push_back(s);
    elimDups(vs);
    for (auto s : vs)
        std::cout << s << " ";
    std::cout << std::endl;
    return 0;
}
