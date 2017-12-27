#include <iostream>
int main()
{
    // Exercise 1.9:
    int sum = 0;
    for (int val = 50; val <= 100; ++val)
        sum += val;
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;

    // Exercise 1.10:
    for (int val = 10; val >= 0; --val)
        std::cout << val << std::endl;

    return 0;
}
