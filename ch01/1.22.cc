#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item trans, total;
    while (std::cin >> trans)
        total += trans;
    std::cout << total << std::endl;
    return 0;
}
