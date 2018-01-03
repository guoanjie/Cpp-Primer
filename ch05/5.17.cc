#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    vector<int> v1 = {0, 1, 1, 2}, v2 = {0, 1, 1, 2, 3, 5, 8};
    auto it1 = v1.cbegin(), it2 = v2.cbegin();
    for (; it1 != v1.cend() && it2 != v2.cend(); ++it1, ++it2) {
        if (*it1 != *it2)
            break;
    }
    if (it1 == v1.cend() || it2 == v2.cend())
        cout << "prefix" << endl;
    else
        cout << "not prefix" << endl;
    return 0;
}
