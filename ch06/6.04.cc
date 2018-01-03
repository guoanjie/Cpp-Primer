#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fact() {
    int ret = 1, val;
    cin >> val;
    while (val > 1)
        ret *= val--;
    return ret;
}

int main()
{
    cout << fact() << endl;
    return 0;
}
