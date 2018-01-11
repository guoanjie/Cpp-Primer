#include <iostream>
#include <string>

std::string generate(std::string name, std::string prefix, std::string suffix) {
    name.insert(0, prefix);
    name.insert(prefix.size(), " ");
    name.insert(name.size(), " ");
    name.insert(name.size(), suffix);
    return name;
}

int main() {
    std::string name, prefix, suffix;
    std::cin >> name >> prefix >> suffix;
    std::cout << generate(name, prefix, suffix) << std::endl;
    return 0;
}
