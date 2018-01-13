#include <iostream>

int main() {
    int sum, a;
    std::cin >> sum >> a;
    auto add = [sum](int a) { return sum + a; };
    std::cout << add(a) << std::endl;
    return 0;
}
