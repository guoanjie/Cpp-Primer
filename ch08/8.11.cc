#include <iostream>
#include <sstream>
#include <string>
#include <vector>

struct PersonInfo {
    std::string name;
    std::vector<std::string> phones;
};

int main() {
    std::string line, word;
    std::vector<PersonInfo> people;
    std::istringstream record;
    while (getline(std::cin, line)) {
        record.clear();
        record.str(line);
        PersonInfo info;
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);

        std::cout << info.name << " ";
        for (auto w : info.phones)
            std::cout << w << " ";
        std::cout << std::endl;
    }
    return 0;
}
