#include <iostream>
using std::cin;
using std::cout;
using std::endl;

double abs(double num){
    if(num < 0)
        return (-1) * num;
    else
        return num;
}

int main()
{
    cout << "Please enter a number:";
    double num = 0.0;
    cin >> num;
    cout << "The absolute value of number is : " << abs(num) << endl;
}