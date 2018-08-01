#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std::placeholders;

int main() {
    std::vector<int> primes = {2, 3, 5, 7};
    int n;
    while (std::cin >> n) {
        auto it = std::find_if_not(primes.begin(), primes.end(),
            std::bind(std::modulus<int>(), n, _1)
        );
        std::cout << (it == primes.end() ? 0 : *it) << std::endl;
    }
    return 0;
}
