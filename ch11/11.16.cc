#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> msi;
    std::string key;
    int val;
    while (std::cin >> key >> val) {
        auto it = msi.find(key);
        if (it == msi.end())
            msi.insert({key, val});
        else
            it->second = val;
    }
    for (const auto &p : msi)
        std::cout << p.first << '\t' << p.second << std::endl;
    return 0;
}
