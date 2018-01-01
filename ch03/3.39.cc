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

    const size_t array_size = 10;
    char cs[array_size], ct[array_size];
    cin >> cs >> ct;
    if (strcmp(cs, ct) < 0)
        cout << ct << " is larger" << endl;
    else if (strcmp(cs, ct) > 0)
        cout << cs << " is larger" << endl;
    else
        cout << cs << " and " << ct << " are equal" << endl;

    return 0;
}
