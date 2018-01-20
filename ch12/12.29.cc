#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
    std::ifstream infile(argv[1]);
    std::vector<std::string> input;
    std::map<std::string, std::set<int>> line_numbers;
    for (std::string line; getline(infile, line);) {
        input.push_back(line);
        std::stringstream ss(line);
        for (std::string word; ss >> word;) {
            line_numbers[word].insert(input.size());
        }
    }
    do {
        std::cout << "enter word to look for, or q to quit: ";
        std::string s;
        if (!(std::cin >> s) || s == "q") break;
        std::cout << s << " occurs " << line_numbers[s].size() << (line_numbers[s].size() > 1 ? " times:" : " time:") << std::endl;
        for (auto n : line_numbers[s])
            std::cout << "\t(line " << n << ") " << input[n - 1] << std::endl;
    } while(true);
    return 0;
}
