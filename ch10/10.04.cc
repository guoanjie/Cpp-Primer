#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<double> vi;
    for (double d; std::cin >> d;)
        vi.push_back(d);
    std::cout << accumulate(vi.cbegin(), vi.cend(), 0.) << std::endl;
    return 0;
}
