#include <iostream>

class numbered {
friend void f (const numbered &s);
public:
    numbered(): mysn(++sn) { }
    numbered(const numbered &): mysn(++sn) { }
private:
    static int sn;
    int mysn;
};

int numbered::sn = 0;

void f(const numbered &s) { std::cout << s.mysn << std::endl; }

int main() {
    numbered a, b = a, c = b;
    f(a); f(b); f(c);
    return 0;
}
