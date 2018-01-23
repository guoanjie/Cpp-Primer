#include <iostream>
#include <memory>

class String {
public:
    String() { char s[] = ""; init(s); }
    String(const String &s) { init(s.c_str); }
    String(char s[]) { init(s); }
    String &operator=(const String &s);
    ~String() { free(); }
private:
    static std::allocator<char> alloc;
    void init(char s[]);
    void free() { alloc.deallocate(c_str, std::strlen(c_str) + 1); }
    char *c_str;
};

std::allocator<char> String::alloc;

String &String::operator=(const String &s) {
    free();
    init(s.c_str);
    return *this;
}

void String::init(char s[]) {
    c_str = alloc.allocate(std::strlen(s) + 1);
    std::uninitialized_copy(s, s + std::strlen(s) + 1, c_str);
}

int main() {
    char s[] = "string";
    String str(s);
    return 0;
}
