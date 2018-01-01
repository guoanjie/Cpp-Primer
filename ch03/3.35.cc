#include <iostream>
#include <iterator>
using std::cout;
using std::endl;
using std::begin;
using std::end;
int main()
{
    int ia[] = {0, 2, 4, 6, 8};
    for (auto p = begin(ia); p != end(ia); ++p)
        *p = 0;
    for (auto e : ia)
        cout << e << " ";
    cout << endl;
    return 0;
}
