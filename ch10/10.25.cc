#include <iostream>
#include <string>
#include <vector>

using namespace std::placeholders;

void elimDups(std::vector<std::string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool check_size(const std::string &s, std::string::size_type sz) {
    return s.size() >= sz;
}

void biggies(std::vector<std::string> &words, std::vector<std::string>::size_type sz) {
    elimDups(words);
    auto wc = stable_partition(words.begin(), words.end(),
            bind(check_size, _1, sz));
    for_each(words.begin(), wc,
            [](const std::string &s) { std::cout << s << " "; });
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
