#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
    vector<int> v1;                 //  0:
    vector<int> v2(10);             // 10: 0
    vector<int> v3(10, 42);         // 10: 42
    vector<int> v4{10};             //  1: 10
    vector<int> v5{10, 42};         //  2: 10 42
    vector<string> v6{10};          // 10: ""
    vector<string> v7{10, "hi"};    // 10: "hi"
    for (auto e : v1)   cout << e << " ";   cout << endl;
    for (auto e : v2)   cout << e << " ";   cout << endl;
    for (auto e : v3)   cout << e << " ";   cout << endl;
    for (auto e : v4)   cout << e << " ";   cout << endl;
    for (auto e : v5)   cout << e << " ";   cout << endl;
    for (auto e : v6)   cout << e << " ";   cout << endl;
    for (auto e : v7)   cout << e << " ";   cout << endl;
    return 0;
}
