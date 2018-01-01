#include <cstddef>
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    const size_t array_size = 10;
    int a[array_size], b[array_size];
    for (auto &e : a)
        cin >> e;
    for (auto &e : b)
        cin >> e;
    size_t i = 0;
    for (; i != array_size; ++i) {
        if (a[i] != b[i])
            break;
    }
    if (i == array_size)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    vector<int> u, v;
    int e;
    for (size_t i = 0; i != array_size; ++i) {
        cin >> e;
        u.push_back(e);
    }
    for (size_t i = 0; i != array_size; ++i) {
        cin >> e;
        v.push_back(e);
    }

    if (u == v)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    return 0;
}
