#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int abs(int n) {
    return n < 0 ? -n : n;
}

int main()
{
    int n;
    cin >> n;
    cout << abs(n) << endl;
    return 0;
}
