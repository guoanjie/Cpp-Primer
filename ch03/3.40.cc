#include <iostream>
#include <string>
using std::cout;
using std::endl;
int main()
{
    char first[] = "first", second[] = "second";
    char third[20];
    strcpy(third, first);
    strcat(third, second);
    cout << third << endl;
    return 0;
}
