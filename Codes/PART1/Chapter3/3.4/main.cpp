#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    //修改前
    // if(str1 == str2){
    //     cout << "equal" << endl;
    // }else{
    //     cout << "not equal" << endl;
    //     if(str1 > str2){
    //         cout << str1 << endl;
    //     }else{
    //         cout << str2 << endl;
    //     }
    // }

    //修改后
    if(str1.size() == str2.size()){
        cout << "equal" << endl;
    }else{
        cout << "not equal" << endl;
        if (str1.size() > str2.size()){
            cout << str1 << endl;
        }else{
            cout << str2 << endl;
        }
    }
    return 0;
}