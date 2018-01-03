#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    do {
        string s1, s2;
        cout << "Please enter two strings to compare:";
        if (cin >> s1 >> s2) {
            if (s1.length() < s2.length())
                cout << s1 << " is less than " << s2 << endl;
            else if (s1.length() > s2.length())
                cout << s2 << " is less than " << s1 << endl;
        }
    } while (cin);
    return 0;
}
