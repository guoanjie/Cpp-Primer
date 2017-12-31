#include <string>
using std::string;
int main()
{
    const string s = "Keep out!";
    for (auto &c : s) { /* ... */ } // const char &
    return 0;
}
