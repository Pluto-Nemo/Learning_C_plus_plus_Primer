#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> text;
    string word;
    while(getline(cin, word)){
        text.push_back(word);
    }
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){
        for (auto c = it->begin(); c != it->end(); ++c){
            *c = toupper(*c);
        }
        cout << *it << endl;
    }

    return 0;
}