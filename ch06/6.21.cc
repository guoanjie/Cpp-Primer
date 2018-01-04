#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int max(int a, const int *pb) {
    return a > *pb ? a : *pb;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(a, &b) << endl;
    return 0;
}
