#include <iostream>

int main(){
    int a = 0, b = 0, sum = 0, val = 0;
    std::cout << "Please input two numbers:" << std::endl;
    std::cin >> a >> b;
    if(a > b){
        int tmp = 0;
        tmp = a; a = b; b = tmp;
    }
    val = a;
    while(val <= b){
        sum += val;
        ++val;
    }
    std::cout << "Sum of " << a << " to " << b << " inclusive is " << sum << std::endl;
    return 0;
}