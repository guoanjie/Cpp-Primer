#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;
int main()
{
    int i, j;
    while (cin >> i >> j) {
        try {
            if (j == 0)
                throw runtime_error("division by zero");
            cout << i / j << endl;
            break;
        } catch (runtime_error err) {
            cout << err.what() << endl;
        }
    }
    return 0;
}
