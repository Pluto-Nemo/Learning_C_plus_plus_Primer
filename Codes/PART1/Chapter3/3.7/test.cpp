#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s;
    cin >> s;
    for (char &c : s){
        c = 'X';
    }
    cout << s;

    return 0;
}

//使用char类型也是可以的，验证了字符串是字符的组合。