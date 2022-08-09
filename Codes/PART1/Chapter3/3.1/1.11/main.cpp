#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int a = 0, b = 0, val = 0;
    cout << "Please input a smaller number and a bigger number in sequence:" << endl;
    cin >> a >> b;
    cout << "The numbers between two integers are shown below:" << endl;
    val = a;
    while(val <= b){
        cout << val << endl;
        ++val;
    }
    return 0;
}