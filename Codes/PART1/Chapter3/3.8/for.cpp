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
    for (unsigned i = 0; i < s.size(); ++i){
        s[i] = 'X';
    }
    cout << s;

    return 0;
}