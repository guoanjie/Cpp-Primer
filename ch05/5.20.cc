#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string last = "", s;
    bool repeated = false;
    while (cin >> s) {
        if (s == last) {
            repeated = true;
            break;
        }
        last = s;
    }
    if (repeated)
        cout << s << endl;
    else
        cout << "no word was repeated" << endl;
    return 0;
}
