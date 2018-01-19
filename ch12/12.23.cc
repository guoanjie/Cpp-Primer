#include <iostream>
#include <string>

int main() {
    const char *s1 = "Hello, ";
    const char *s2 = "World!";
    char *s = new char[std::strlen(s1) + std::strlen(s2) + 1];
    std::strcpy(s, s1);
    std::strcat(s, s2);
    std::cout << s << std::endl;
    delete [] s;
    return 0;
}
