#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string word;
    vector<string> svec;
    while(cin >> word){
        svec.push_back(word);
    }
    for(auto &tWord : svec){
        for(auto &c : tWord){
            c=toupper(c);            
        }
        cout << tWord << endl;
    }

    return 0;
}