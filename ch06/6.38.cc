#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i) {
    return (i % 2) ? odd : even;
}

int main()
{
    int i;
    cin >> i;
    for (auto &e : arrPtr(i))
        e = 0;
    for (auto e : odd)
        cout << e << " ";
    cout << endl;
    for (auto e : even)
        cout << e << " ";
    cout << endl;
    return 0;
}
