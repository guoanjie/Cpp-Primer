#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cin >> n;
    if (n % 2)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
    return 0;
}
