#include <memory>
#include <string>

int main() {
    std::unique_ptr<std::string> p1(new std::string("Stegosaurus"));
    std::unique_ptr<std::string> p2(p1);
    std::unique_ptr<std::string> p3;
    p3 = p2;
    return 0;
}
