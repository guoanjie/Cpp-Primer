#include <iostream>

class IfThenElse {
public:
    int operator()(bool i, int t, int e) const {
        return i ? t : e;
    }
};

int main() {
    int n;
    std::cin >> n;
    std::cout << IfThenElse()(n > 0, n, -n) << std::endl;
    return 0;
}
