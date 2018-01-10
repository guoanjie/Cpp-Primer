#include <iostream>
#include <vector>

int main() {
    std::vector<int> vi;
    for (int i = 0; i < 100; ++i) {
        vi.push_back(i);
        std::cout << vi.size() << '\t' << vi.capacity() << std::endl;
    }
    return 0;
}
