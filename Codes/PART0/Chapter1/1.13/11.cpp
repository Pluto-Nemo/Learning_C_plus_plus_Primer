#include <iostream>

int main(){
    int a = 0, b = 0, sum = 0;
    std::cout << "Please input a smaller number and a bigger number in sequence:" << std::endl;
    std::cin >> a >> b;
    for(int val = a; val <= b; ++val)
        sum += val;
    std::cout << "Sum of " << a << " to " << b << " inclusive is " << sum << std::endl;
    return 0;
}