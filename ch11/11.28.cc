#include <map>
#include <string>
#include <vector>

int main() {
    std::map<std::string, std::vector<int>> msvi;
    std::map<std::string, std::vector<int>>::iterator it = msvi.find("key");
    return 0;
}
