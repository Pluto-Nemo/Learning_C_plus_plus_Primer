#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned ffCnt = 0, fiCnt = 0, flCnt = 0;
    char ch = '\0', ch2 = '\0';
    while(cin >> ch){
        while(ch == 'f'){
            cin >> ch2;
            switch(ch2){
                case 'f':
                    ++ffCnt;
                    break;
                case 'i':
                    ++fiCnt;
                    break;
                case 'l':
                    ++flCnt;
                    break;
            }
            ch = ch2;
        }
    }
    cout << "Number of ff:  " << ffCnt << '\n'
         << "Number of fi:  " << fiCnt << '\n'
         << "Number of fl:  " << flCnt << endl;

    return 0;
}
