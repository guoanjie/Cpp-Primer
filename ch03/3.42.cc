#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    const size_t array_size = 10;
    vector<int> v;
    int n;
    for (size_t i = 0; i != array_size; ++i) {
        cin >> n;
        v.push_back(n);
    }
    int a[array_size];
    int *p = a;
    for (auto e : v)
        *p++ = e;
    for (auto e : a)
        cout << e << " ";
    cout << endl;
    return 0;
}
