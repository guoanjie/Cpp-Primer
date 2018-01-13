#include <iostream>
#include <string>
#include <vector>

using namespace std::placeholders;

bool check_size(const std::string &s, std::string::size_type sz) {
    return s.size() >= sz;
}

int main() {
    std::string value;
    std::cin >> value;
    std::vector<std::string> words;
    for (std::string word; std::cin >> word;)
        words.push_back(word);
    std::cout << *find_if(words.cbegin(), words.cend(),
            bind(check_size, _1, 1 + value.size())) << std::endl;
    return 0;
}
