#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string s, t;
    cin >> s >> t;
    if (s < t)
        cout << t << " is larger" << endl;
    else if (s > t)
        cout << s << " is larger" << endl;
    else
        cout << s << " and " << t << " are equal" << endl;
    if (s.length() < t.length())
        cout << t << " is longer" << endl;
    else if (s.length() > t.length())
        cout << s << " is longer" << endl;
    else
        cout << s << " and " << t << " have the same length" << endl;
    return 0;
}
