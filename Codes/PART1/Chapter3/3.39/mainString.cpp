#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

int main()
{
    string s1 = "A string example";
    string s2 = "A different string";
    if(s1 < s2){
        cout << "s1 is smaller than s2." << endl;
    }else{
        cout << "s1 is bigger than s2." << endl;
    }

    return 0;
}