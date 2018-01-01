#include <iostream>
#include <limits>
using std::cout;
using std::endl;
using std::numeric_limits;
int main()
{
    short s = numeric_limits<short>::max();
    cout << s << '\t';
    cout << ++s << endl;
    int i = numeric_limits<int>::max();
    cout << i << '\t';
    cout << ++i << endl;
    long l = numeric_limits<long>::max();
    cout << l << '\t';
    cout << ++l << endl;
    return 0;
}
