#include <string>

typedef std::string Type;

Type initVal();

class Exercise {
public:
    typedef double Type;
    Type setVal(Type);  // double double
    Type initVal(); // double
private:
    int val;
};

// Type Exercise::setVal(Type parm) {   // string double
Exercise::Type Exercise::setVal(Type parm) {    // double double
    val = parm + initVal();
    return val;
}

Exercise::Type Exercise::initVal() {
    return 0;
}

int main() {
    return 0;
}
