#include <vector>
using std::vector;

int f(int, int);

int main()
{
    vector<decltype(f)*> fv;
    return 0;
}
