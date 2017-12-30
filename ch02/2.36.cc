#include <iostream>
int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    std::cout << a << ' ' << b << ' ' << c << ' ' << d << std::endl; // 3 4 3 3
    ++c;
    std::cout << a << ' ' << b << ' ' << c << ' ' << d << std::endl; // 3 4 4 3
    ++d;
    std::cout << a << ' ' << b << ' ' << c << ' ' << d << std::endl; // 4 4 4 4
    return 0;
}
