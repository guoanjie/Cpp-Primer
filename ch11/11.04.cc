#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {
    std::map<std::string, size_t> word_count;
    std::set<std::string> exclude = {
            "The", "But", "And", "Or", "An", "A",
            "the", "but", "and", "or", "an", "a"
    };
    std::string w;
    while (std::cin >> w) {
        std::string word;
        std::remove_copy_if(w.cbegin(), w.cend(), std::back_inserter(word),
                [](char c) { return ispunct(c); });
        std::transform(word.cbegin(), word.cend(), word.begin(), tolower);
        if (exclude.find(word) == exclude.end())
            ++word_count[word];
    }
    for (const auto &w : word_count)
        std::cout << w.first << " occurs " << w.second
                  << ((w.second > 1) ? " times" : " time") << std::endl;
    return 0;
}
