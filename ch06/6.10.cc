#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << '\t' << b << endl;
}
