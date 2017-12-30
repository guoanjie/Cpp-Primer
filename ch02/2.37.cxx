#include <iostream>
int main()
{
    int a = 3, b = 4;       // int, int
    decltype(a) c = a;      // int
    std::cout << a << '\t' << b << '\t' << c << std::endl;
    decltype(a = b) d = a;  // int &
    std::cout << a << '\t' << b << '\t' << c << '\t' << d << std::endl;
    return 0;
}
