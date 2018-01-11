#include <iostream>
#include <string>

std::string generate(std::string name, std::string prefix, std::string suffix) {
    prefix += " ";
    name.insert(name.begin(), prefix.cbegin(), prefix.cend());
    name.append(" ");
    name.append(suffix.cbegin(), suffix.cend());
    return name;
}

int main() {
    std::string name, prefix, suffix;
    std::cin >> name >> prefix >> suffix;
    std::cout << generate(name, prefix, suffix) << std::endl;
    return 0;
}
