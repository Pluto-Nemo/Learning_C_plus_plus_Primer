#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void fact()
{
    cout << "Please enter an integer:";
    unsigned n = 0;
    cin >> n;
    int ret = 1;
    while (n > 1)
        ret *= n--;
    cout << "n! = " << ret << endl;
}

int main()
{
    fact();

    return 0;
}