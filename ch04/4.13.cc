#include <iostream>
using std::cout;
using std::endl;
int main()
{
    int i;  double d;
    d = i = 3.5;
    cout << i << '\t' << d << endl; // 3 3
    i = d = 3.5;
    cout << i << '\t' << d << endl; // 3 3.5
    return 0;
}
