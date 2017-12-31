#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;
int main()
{
    vector<string> text;
    string s;
    while (getline(cin, s))
        text.push_back(s);
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
        for (auto &c : *it)
            c = toupper(c);
    }
    for (auto it = text.begin(); it != text.end(); ++it)
        cout << *it << endl;
    return 0;
}
