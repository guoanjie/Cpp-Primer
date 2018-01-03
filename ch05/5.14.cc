#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string currWord, maxWord, lastWord = "";
    int currCnt = 0, maxCnt = 0;
    while (cin >> currWord) {
        if (currWord == lastWord)
            ++currCnt;
        else
            currCnt = 1;
        if (currCnt > maxCnt) {
            maxWord = currWord;
            maxCnt = currCnt;
        }
        lastWord = currWord;
    }
    if (maxCnt > 1)
        cout << "the word " << maxWord << " occurred " << maxCnt << " times" << endl;
    else
        cout << "no word was repeated" << endl;
    return 0;
}
