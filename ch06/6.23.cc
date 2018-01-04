#include <iostream>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(int i) {
    cout << i << endl;
}

void print(const int *beg, const int *end) {
    while (beg != end)
        cout << *beg++ << " ";
    cout << endl;
}

void print(const int ia[], size_t size) {
    for (size_t i = 0; i != size; ++i)
        cout << ia[i] << " ";
    cout << endl;
}

void print(const int (&arr)[2]) {
    for (auto elem : arr)
        cout << elem << " ";
    cout << endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print(i);
    print(begin(j), end(j));
    print(j, end(j) - begin(j));
    print(j);
    return 0;
}
