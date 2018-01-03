#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while (cin >> ch) {
        switch (ch) {
            case 'A':   case 'a':
                ++aCnt;
                break;
            case 'E':   case 'e':
                ++eCnt;
                break;
            case 'I':   case 'i':
                ++iCnt;
                break;
            case 'O':   case 'o':
                ++oCnt;
                break;
            case 'U':   case 'u':
                ++uCnt;
                break;
        }
    }
    cout << "Number of vowel a: \t" << aCnt << endl
         << "Number of vowel e: \t" << eCnt << endl
         << "Number of vowel i: \t" << iCnt << endl
         << "Number of vowel o: \t" << oCnt << endl
         << "Number of vowel u: \t" << uCnt << endl;
    return 0;
}
