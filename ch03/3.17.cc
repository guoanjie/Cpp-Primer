#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
    vector<string> v;
    string s;
    while (cin >> s)
        v.push_back(s);
    for (auto &s : v) {
        for (auto &c : s)
            c = toupper(c);
    }
    for (decltype(v.size()) i = 0; i != v.size(); ++i) {
        cout << v[i] << " ";
        if ((i + 1) % 8 == 0)
            cout << endl;
    }
    cout << endl;
    return 0;
}
