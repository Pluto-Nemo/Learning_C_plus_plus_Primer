#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str1 = "", str2 = "";
    do{
        cout << "Please enter two strings: ";
        if (cin >> str1 >> str2){
            if(str1.size() > str2.size())
                cout << str2 << endl;
            else if(str1.size() == str2.size())
                cout << "The two strings are of equal length." << endl;
            else
                cout << str1 << endl;
        }
    } while (cin);
    
    return 0;
}