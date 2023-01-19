#include "Chapter6.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "test function1:" << endl;
    cout << "Please enter an integer:";
    unsigned num = 0;
    cin >> num;
    cout <<"n! = "<< fact(num) << endl;

    cout << "test function2:" << endl;
    fact();

    cout << "test function3:" << endl;
    cout << "Please enter a double:";
    double num2 = 0.0;
    cin >> num2;
    cout << "|n| = " << abs(num2) << endl;

    return 0;
}