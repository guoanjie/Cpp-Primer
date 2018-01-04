#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool hasUpper(const string &s) {
    for (auto c : s) {
        if (isupper(c))
            return true;
    }
    return false;
}

void toLower(string &s) {
    for (auto &c : s)
        c = tolower(c);
}

int main()
{
    string s;
    cin >> s;
    cout << hasUpper(s) << endl;
    toLower(s);
    cout <<s << endl;
    return 0;
}
