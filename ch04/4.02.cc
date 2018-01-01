#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
int main()
{
    vector<int> vec{0};
    cout << (* ((vec.begin)())) << endl;
    cout << (* ((vec.begin)())) + 1 << endl;
    return 0;
}
