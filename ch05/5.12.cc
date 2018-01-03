#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned  Cnt = 0, tCnt = 0, nCnt = 0;
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch;
    bool lastf = false;
    while (cin.get(ch)) {
        switch (ch) {
            case 'A':   case 'a':
                ++aCnt;
                break;
            case 'E':   case 'e':
                ++eCnt;
                break;
            case 'f':
                ffCnt += lastf;
                break;
            case 'i':
                fiCnt += lastf;
            case 'I':
                ++iCnt;
                break;
            case 'l':
                flCnt += lastf;
                break;
            case 'O':   case 'o':
                ++oCnt;
                break;
            case 'U':   case 'u':
                ++uCnt;
                break;
            case ' ':
                ++ Cnt;
                break;
            case '\t':
                ++tCnt;
                break;
            case '\n':
                ++nCnt;
                break;
        }

        lastf = ch == 'f';
    }
    cout << "Number of vowel a: \t" << aCnt << endl
         << "Number of vowel e: \t" << eCnt << endl
         << "Number of vowel i: \t" << iCnt << endl
         << "Number of vowel o: \t" << oCnt << endl
         << "Number of vowel u: \t" << uCnt << endl
         << "Number of spaces:  \t" <<  Cnt << endl
         << "Number of tabs:    \t" << tCnt << endl
         << "Number of newlines:\t" << nCnt << endl
         << "Number of ff:      \t" << ffCnt << endl
         << "Number of fl:      \t" << flCnt << endl
         << "Number of fi:      \t" << fiCnt << endl;
    return 0;
}
