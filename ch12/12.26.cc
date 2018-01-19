#include <iostream>
#include <memory>
#include <string>

int main() {
    const char *s1 = "Hello, ";
    const char *s2 = "World!";
    std::allocator<char> alloc;
    auto s = alloc.allocate(std::strlen(s1) + std::strlen(s2) + 1);
    std::strcpy(s, s1);
    std::strcat(s, s2);
    std::cout << s << std::endl;
    alloc.deallocate(s, std::strlen(s1) + std::strlen(s2) + 1);
    return 0;
}
