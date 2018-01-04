#include <initializer_list>
#include <iostream>
using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> il) {
    int s = 0;
    for (auto i : il)
        s += i;
    return s;
}

int main()
{
    cout << sum({1, 2, 3, 4, 5, 6, 7}) << endl;
    return 0;
}
