#include <vector>
using std::vector;

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int main()
{
    vector<int (*)(int, int)> vf = {add, subtract, multiply, divide};
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
