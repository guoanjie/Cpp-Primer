#include <iostream>
#include <memory>
#include <vector>

struct X {
    X() { std::cout << "X()" << std::endl; }
    X(const X&) { std::cout << "X(const X&)" << std::endl; }
    ~X() { std::cout << "~X()" << std::endl; }
};

void nonref(X) { }

void ref(X&) { }

int main() {
    X x;
    nonref(x);
    ref(x);
    auto xp = std::make_shared<X>();
    std::vector<X> vx{x};
    return 0;
}
