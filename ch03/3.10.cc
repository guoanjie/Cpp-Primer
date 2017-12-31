#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
int main()
{
    string input, output;
    getline(cin, input);
    for (auto c : input)
    {
        if(!ispunct(c))
            output += c;
    }
    cout << output << endl;
    return 0;
}
