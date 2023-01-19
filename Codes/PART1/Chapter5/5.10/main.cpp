#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while(cin >> ch){
        if (ch == 'a' || ch == 'A')
            ++aCnt;
        else if (ch == 'e' || ch == 'E')
            ++eCnt;
        else if (ch == 'i' || ch == 'I')
            ++iCnt;
        else if (ch == 'o' || ch == 'O')
            ++oCnt;
        else if (ch == 'u' || ch == 'U')
            ++uCnt;
    }
    cout << "Number of vowel a:  " << aCnt << '\n'
         << "Number of vowel e:  " << eCnt << '\n'
         << "Number of vowel i:  " << iCnt << '\n'
         << "Number of vowel o:  " << oCnt << '\n'
         << "Number of vowel u:  " << uCnt << endl;

    return 0;
}