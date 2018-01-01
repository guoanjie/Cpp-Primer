#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b && b > c && c > d)
        cout << "a > b > c > d" << endl;
    return 0;
}
