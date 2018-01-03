#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;
int main()
{
    int i, j;
    cin >> i >> j;
    if (j == 0)
        throw runtime_error("division by zero");
    cout << i / j << endl;
    return 0;
}
