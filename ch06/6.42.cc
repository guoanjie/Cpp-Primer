#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

string make_plural(size_t ctr, const string &word, const string &ending = "s") {
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    for (auto word: {string("success"), string("failure")})
        cout << make_plural(word.size(), word) << endl;
    return 0;
}
