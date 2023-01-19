#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main(int argc,char *argv[]){
    string s1 = argv[1], s2 = argv[2];
    string sum = s1 + s2;
    cout << sum << endl;
    return 0;
}