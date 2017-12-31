#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    vector<int> v(10);
    for (auto it = v.begin(); it != v.end(); ++it)
        cin >> *it;
    for (auto it = v.begin(); it != v.end(); ++it)
        *it *= 2;
    for (auto it = v.cbegin(); it != v.cend(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}
