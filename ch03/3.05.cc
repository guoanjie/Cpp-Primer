#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string input, output;
    if (cin >> output)
    {
        while (cin >> input)
            output += " " + input;
    }
    cout << output << endl;
}
