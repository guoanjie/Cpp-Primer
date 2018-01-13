#include <iostream>

int main() {
    int var;
    auto dec = [&var]() { return var > 0 ? --var, false : true; };
    std::cin >> var;
    while (!dec())
        std::cout << var << std::endl;
    std::cout << dec() << std::endl;
    std::cout << var << std::endl;
    return 0;
}
