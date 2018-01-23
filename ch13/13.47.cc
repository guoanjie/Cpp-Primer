#include <iostream>
#include <memory>
#include <vector>

class String {
public:
    String() { char s[] = ""; init(s); }
    String(const String&);
    String(char s[]) { init(s); }
    String &operator=(const String &);
    ~String() { free(); }
private:
    static std::allocator<char> alloc;
    void init(char s[]);
    void free() { alloc.deallocate(c_str, std::strlen(c_str) + 1); }
    char *c_str;
};

std::allocator<char> String::alloc;

String::String(const String &s) {
    std::cout << "String(const String&)" << std::endl;
    init(s.c_str);
}

String &String::operator=(const String &s) {
    std::cout << "String &operator=(const String &)" << std::endl;
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
    std::vector<String> vs;
    vs.push_back(str);
    return 0;
}
