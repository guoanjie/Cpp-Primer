#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int main()
{
    vector<int (*)(int, int)> vf = {add, subtract, multiply, divide};
    int a, b;
    cin >> a >> b;
    for (auto f : vf)
        cout << f(a, b) << " ";
    cout << endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}
