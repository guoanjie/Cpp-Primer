#include <iostream>
#include <string>
#include <vector>

using namespace std::placeholders;

bool check_size(const std::string &s, std::string::size_type sz) {
    return s.size() >= sz;
}

int main() {
    std::vector<std::string> words;
    for (std::string word; std::cin >> word;)
        words.push_back(word);
    std::cout << count_if(words.cbegin(), words.cend(),
            bind(check_size, _1, 6)) << std::endl;
    return 0;
}
