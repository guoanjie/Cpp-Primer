#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void max(int a, int *b) {
    if (a > *b)
        *b = a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    max(a, &b);
    cout << b << endl;
    return 0;
}
