#include <iostream>
#include <string>

bool noScenders(const std::string &s) {
    static const std::string scenders = "bdfghijklpqty";
    return s.find_first_of(scenders) == std::string::npos;
}

int main() {
    std::string longest = "";
    int max_len = 0;
    for (std::string word; std::cin >> word;) {
        if (noScenders(word) && word.size() > max_len) {
            longest = word;
            max_len = word.size();
        }
    }
    std::cout << longest << std::endl;
    return 0;
}
