#include <string>
using std::string;
int main()
{
    int i = 0;
    double d = 0.0;
    string s = "";
    const string *ps = &s;
    char c = '\0';
    char *pc = &c;
    void *pv;
    pv = static_cast<void*>(const_cast<string*>(ps));
    i = static_cast<int>(*pc);
    pv = static_cast<void*>(&d);
    pc = static_cast<char*>(pv);
    return 0;
}
