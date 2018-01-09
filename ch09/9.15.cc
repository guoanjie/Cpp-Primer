#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::vector<std::vector<int>> vvi;
    for (auto _ : {0, 1}) {
        std::string s;
        getline(std::cin, s);
        std::istringstream iss(s);
        std::vector<int> vi;
        int i;
        while (iss >> i)
            vi.push_back(i);
        vvi.push_back(vi);
    }
    std::cout << (vvi[0] == vvi[1]) << std::endl;
    return 0;
}
