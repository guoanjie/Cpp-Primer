#include <iostream>
#include <string>
#include <vector>

bool fiveOrMore(const std::string &word) {
    return word.size() >= 5;
}

int main() {
    std::vector<std::string> words;
    for (std::string word; std::cin >> word;)
        words.push_back(word);
    auto end = partition(words.begin(), words.end(), fiveOrMore);
    for (auto it = words.begin(); it != end; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    return 0;
}
