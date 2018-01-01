#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    vector<int> v;
    int i;
    while (cin >> i)
        v.push_back(i);
    for (auto &i : v)
        i *= i % 2 ? 2 : 1;
    for (auto i : v)
        cout << i << " ";
    cout << endl;
    return 0;
}
