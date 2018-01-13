#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words;
    for (std::string word; std::cin >> word;)
        words.push_back(word);
    std::cout << count_if(words.cbegin(), words.cend(),
            [](const std::string &s) { return s.size() > 6; }) << std::endl;
    return 0;
}
