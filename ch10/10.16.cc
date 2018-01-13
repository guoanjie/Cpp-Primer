#include <iostream>
#include <string>
#include <vector>

void elimDups(std::vector<std::string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

void biggies(std::vector<std::string> &words, std::vector<std::string>::size_type sz) {
    elimDups(words);
    stable_sort(words.begin(), words.end(),
            [](const std::string &a, const std::string &b)
                { return a.size() < b.size(); });
    auto wc = find_if(words.begin(), words.end(),
            [sz](const std::string &a) { return a.size() >= sz; });
    for_each(wc, words.end(), [](const std::string &s){std::cout << s << " ";});
    std::cout << std::endl;
}

int main() {
    std::vector<std::string> words;
    decltype(words)::size_type sz;
    std::cin >> sz;
    for (std::string word; std::cin >> word;)
        words.push_back(word);
    biggies(words, sz);
    return 0;
}
