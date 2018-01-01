#include <iostream>
#include <iterator>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;
int main()
{
    const size_t array_size = 10;
    int a[array_size];
    for (auto &e : a)
        cin >> e;
    vector<int> v(begin(a), end(a));
    for (auto it = v.cbegin(); it != v.cend(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}
