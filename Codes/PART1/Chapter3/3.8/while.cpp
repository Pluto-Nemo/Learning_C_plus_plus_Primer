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
    unsigned i = 0;
    while(i < s.size()){
        s[i] = 'X';
        ++i;
    }
    cout << s;

    return 0;
}