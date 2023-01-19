#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::noskipws;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, wsCnt = 0, tbCnt = 0, nlCnt = 0;
    char ch;
    while (cin >> noskipws >> ch){
        switch(ch){
            case 'a': case 'A':
                ++aCnt;
                break;
            case 'e': case 'E':
                ++eCnt;
                break;
            case 'i': case 'I':
                ++iCnt;
                break;
            case 'o': case 'O':
                ++oCnt;
                break;
            case 'u': case 'U':
                ++uCnt;
                break;
            case ' ':
                ++wsCnt; // ws:whitespace
                break;
            case '\t':
                ++tbCnt; // tb:tabs
                break;
            case '\n':
                ++nlCnt; // nl:newline
                break;
        }
    }
    cout << "Number of vowel a:  " << aCnt << '\n'
         << "Number of vowel e:  " << eCnt << '\n'
         << "Number of vowel i:  " << iCnt << '\n'
         << "Number of vowel o:  " << oCnt << '\n'
         << "Number of vowel u:  " << uCnt << '\n'
         << "Number of whitespace:  " << wsCnt << '\n'
         << "Number of tabs:  " << tbCnt << '\n'
         << "Number of newline:  " << nlCnt << endl;

    return 0;
}