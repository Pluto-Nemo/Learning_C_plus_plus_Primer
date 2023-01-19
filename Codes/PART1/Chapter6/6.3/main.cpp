#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}

int main()
{
    cout << "Please enter an integer:";
    unsigned n = 0;
    cin >> n;
    cout << "n! = " << fact(n) << endl;
    
    return 0;
}