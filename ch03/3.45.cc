#include <cstddef>
#include <iostream>
#include <iterator>
using std::cout;
using std::endl;
using std::begin;
using std::end;
int main()
{
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    size_t cnt = 0;
    for (auto &row : ia)
        for (auto &col : row) {
            col = cnt;
            ++cnt;
        }

    for (auto &row : ia) {
        for (auto col : row)
            cout << col << " ";
        cout << endl;
    }

    for (auto i = 0; i != rowCnt; ++i) {
        for (auto j = 0; j != colCnt; ++j)
            cout << ia[i][j] << " ";
        cout << endl;
    }

    for (auto p = begin(ia); p != end(ia); ++p) {
        for(auto q = begin(*p); q != end(*p); ++q)
            cout << *q << " ";
        cout << endl;
    }

    return 0;
}
