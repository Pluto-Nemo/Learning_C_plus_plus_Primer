#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    cin >> s1;
    for (auto c : s1){
        if(!ispunct(c)){
            s2 += c;
        }
    }
    cout << s2;

    return 0;
}