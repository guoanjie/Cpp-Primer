#include <cstddef>
#include <vector>
using std::vector;
int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 0; ix != array_size; ++ix)
        ia[ix] = ix;

    int ia_[array_size];
    for (size_t ix = 0; ix != array_size; ++ix)
        ia_[ix] = ia[ix];

    vector<int> iv;
    for (int ix = 0; ix != array_size; ++ix)
        iv.push_back(ix);

    vector<int> iv_ = iv;

    return 0;
}
