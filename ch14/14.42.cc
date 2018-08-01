#include <iostream>
#include <vector>

int main() {
    using namespace std::placeholders;

    std::vector<int> vi = {
        1 <<  0, 1 <<  2, 1 <<  4, 1 <<  6, 1 <<  8,
        1 << 10, 1 << 12, 1 << 14, 1 << 16, 1 << 18
    };
    std::cout << std::count_if(vi.cbegin(), vi.cend(),
        std::bind(std::greater<int>(), _1, 1024)
    ) << std::endl;

    std::istream_iterator<std::string> beg(std::cin), end;
    std::cout << *std::find_if(beg, end,
        std::bind(std::not_equal_to<std::string>(), _1, "pooh")
    ) << std::endl;

    std::transform(vi.begin(), vi.end(), vi.begin(),
        std::bind(std::multiplies<int>(), _1, 2)
    );
    for (const auto &i : vi)
        std::cout << i << ' ';
    std::cout << std::endl;

    return 0;
}
