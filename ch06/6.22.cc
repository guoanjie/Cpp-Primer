#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int *&pa, int *& pb) {
    int *temp = pa;
    pa = pb;
    pb = temp;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> *pa >> *pb;
    swap(pa, pb);
    cout << *pa << '\t' << *pb << endl;
    return 0;
}
