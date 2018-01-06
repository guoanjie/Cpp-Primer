#include <vector>
using std::vector;

int f(int, int);

int main()
{
    vector<decltype(f)*> vf;
    return 0;
}
