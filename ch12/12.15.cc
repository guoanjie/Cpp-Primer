#include <iostream>
#include <memory>

struct destination { };
struct connection { };

connection connect(destination* d) {
    std::cout << "connect" << std::endl;
    connection c;
    return c;
}

void disconnect(connection) {
    std::cout << "disconnect" << std::endl;
}

void f(destination &d) {
    connection c = connect(&d);
    std::shared_ptr<connection> p(&c, [](connection *p) { disconnect(*p); });
}

int main() {
    destination d;
    f(d);
    return 0;
}
