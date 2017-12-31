#include <vector>
using std::vector;
int main()
{
    vector<int> v1(10, 42);
    vector<int> v2;
    for (decltype(v2.size()) i; i != 10; ++i)
        v2.push_back(42);
    vector<int> v3(10);
    for (auto &e : v3)
        e = 42;
    return 0;
}
