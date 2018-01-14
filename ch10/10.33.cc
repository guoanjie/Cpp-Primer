#include <fstream>
#include <iterator>

int main(int argc, char *argv[]) {
    std::ifstream is(argv[1]);
    std::ofstream os_odd(argv[2]), os_even(argv[3]);
    std::istream_iterator<int> is_iter(is), eof;
    std::ostream_iterator<int> odd_iter(os_odd, " "), even_iter(os_even, "\n");
    for (auto it = is_iter; it != eof; ++it) {
        if (*it % 2)
            odd_iter = *it;
        else
            even_iter = *it;
    }
    return 0;
}
