#include <algorithm>
#include <iostream>
#include <vector>

class Equals {
public:
    Equals(int v) : val(v) { }
    bool operator()(int v) {
        return val == v;
    }

private:
    int val;
};

int main() {
    std::vector<int> vi = {1, 4, 1, 4, 2, 1, 3, 5, 6, 2};
    std::replace_if(vi.begin(), vi.end(), Equals(1), 0);
    for (auto i : vi)
        std::cout << i << ' ';
    std::cout << std::endl;
    return 0;
}
