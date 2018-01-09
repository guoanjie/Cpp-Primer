#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> read(std::string file) {
    std::ifstream is(file);
    std::vector<std::string> vs;
    std::string s;
    while (is >> s)
        vs.push_back(s);
    return vs;
}

int main() {
    std::vector<std::string> vs = read("8.05.in");
    for (auto s : vs)
        std::cout << s << std::endl;
    return 0;
}
