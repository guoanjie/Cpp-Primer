#include <iostream>

int main() {
    int len = 0, maxlen = 2;
    char *s = new char[maxlen];
    char c;
    while ((c = getchar()) != EOF) {
        s[len] = c;
        ++len;
        s[len] = '\0';
        if (len + 1 >= maxlen) {
            maxlen *= 2;
            char *t = new char[maxlen];
            std::strcpy(t, s);
            delete [] s;
            s = t;
        }
    }
    std::cout << s << std::endl;
    delete [] s;
    return 0;
}
