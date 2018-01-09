#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
    std::ifstream is(argv[1]);
    std::vector<std::string> vs;
    std::string s;
    while (getline(is, s)) {
        vs.push_back(s);
    }

    for (auto line : vs) {
        std::istringstream iss(line);
        std::string word;
        while (iss >> word)
            std::cout << word << " ";
        std::cout << std::endl;
    }

    return 0;
}
