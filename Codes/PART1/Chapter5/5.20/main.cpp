#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str1 = "", str2 = "";
    bool flag = false;
    cin >> str1;
    while(cin >> str2){
        if(str1 == str2){
            cout << "Repeated words: " << str1 << endl;
            flag = true;
            break;
        }else{
            str1 = str2;
        }
    }
    if(!flag)
        cout << "No word is repeated consecutively." << endl;

    return 0;
}