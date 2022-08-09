#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;

    //修改前
    // if(getline(cin, line)){
    //     cout << line << endl;
    // }

    //修改后
    if(cin >> line){
        cout << line << endl;
    }

    return 0;
}