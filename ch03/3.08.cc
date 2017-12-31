#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string s;
    cin >> s;
    decltype(s.length()) i = 0;
    while (i < s.length()) {
        s[i] = 'X';
        ++i;
    }
    cout << s << endl;
    cin >> s;
    for (decltype(s.length()) i = 0; i != s.length(); ++i)
        s[i] = 'X';
    cout << s << endl;
    return 0;
}
