// #define NDEBUG

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print(vector<int>::const_iterator beg, vector<int>::const_iterator end) {
#ifndef NDEBUG
    cout << "(" << end - beg << ") ";
#endif

    if (beg == end)
        cout << endl;
    else {
        cout << *beg << " ";
        print(beg + 1, end);
    }
}

int main()
{
    vector<int> vi;
    int i;
    while (cin >> i)
        vi.push_back(i);
    print(vi.cbegin(), vi.cend());
    return 0;
}
