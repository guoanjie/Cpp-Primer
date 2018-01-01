#include <iostream>
using std::cout;
using std::endl;
int main()
{
    cout << -30 * 3 + 21 / 5 << endl;   // -86
    cout << -30 + 3 * 21 / 5 << endl;   // -18
    cout << 30 / 3 * 21 % 5 << endl;    // 0
    cout << -30 / 3 * 21 % 4 << endl;   // -2
    return 0;
}
