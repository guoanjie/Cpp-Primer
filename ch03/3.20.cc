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
    for (decltype(v.size()) i = 0; i + 1 != v.size(); ++i)
        cout << v[i] + v[i + 1] << " ";
    cout << endl;
    for (decltype(v.size()) i = 0; i != v.size(); ++i)
        cout << v[i] + v[v.size() - i - 1] << " ";
    cout << endl;
    return 0;
}
