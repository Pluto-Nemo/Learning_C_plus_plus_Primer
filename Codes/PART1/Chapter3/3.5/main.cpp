#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string tmpStr,bigStr;
    //修改前
    // while(cin >> tmpStr){
    //     bigStr += tmpStr;
    // }

    //修改后
    cin >> bigStr;
    while (cin >> tmpStr){
        bigStr += " " + tmpStr;
    }

    cout << bigStr << endl;

    return 0;
}