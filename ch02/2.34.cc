#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;

    a = 42; // i = 0, r = 0, a = 42
    std::cout << i << '\t' << r << '\t' << a << std::endl;
    b = 42;
    std::cout << ci << '\t' << b << std::endl;
    c = 42;
    std::cout << ci << '\t' << cr << '\t' << c << std::endl;
    // d = 42;
    // e = 42;
    // g = 42;
    return 0;
}
