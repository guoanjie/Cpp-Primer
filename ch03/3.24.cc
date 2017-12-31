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
    for (auto it = v.cbegin(); it + 1 != v.cend(); ++it)
        cout << *it + *(it + 1) << " ";
    cout << endl;
    for (auto b = v.cbegin(), e = v.cend() - 1; b != v.cend(); ++b, --e)
        cout << *b + *e << " ";
    cout << endl;
    return 0;
}
