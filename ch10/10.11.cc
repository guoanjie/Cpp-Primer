#include <iostream>
#include <string>
#include <vector>

void elimDups(std::vector<std::string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool isShorter(const std::string &s1, const std::string &s2) {
    return s1.size() < s2.size();
}

int main() {
    std::vector<std::string> words;
    for (std::string s; std::cin >> s;)
        words.push_back(s);
    elimDups(words);
    stable_sort(words.begin(), words.end(), isShorter);
    for (const auto &s : words)
        std::cout << s << " ";
    std::cout << std::endl;
    return 0;
}
