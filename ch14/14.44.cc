#include <functional>
#include <iostream>
#include <map>
#include <string>

int add(int i, int j) {
    return i + j;
}

auto mod = [](int i, int j) { return i % j; };

struct divide {
    int operator()(int denominator, int divisor) {
        return denominator / divisor;
    }
};

int main() {
    std::map<std::string, std::function<int(int, int)>> binops = {
        {"+", add},
        {"-", std::minus<int>()},
        {"/", divide()},
        {"*", [](int i, int j) { return i * j; }},
        {"%", mod}
    };
    int a, b;
    std::string op;
    while (std::cin >> a >> op >> b)
        std::cout << binops[op](a, b) << std::endl;
    return 0;
}
