#include <iostream>
#include <string>

int main() {
    std::string name("AnnaBelle"), numbers("0123456789");
    auto pos = numbers.find(name);
    std::cout << pos << std::endl;
    return 0;
}
