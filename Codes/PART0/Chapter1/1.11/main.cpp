#include <iostream>

int main(){
    int a = 0, b = 0, val = 0;
    std::cout << "Please input a smaller number and a bigger number in sequence:" << std::endl;
    std::cin >> a >> b;
    std::cout << "The numbers between two integers are shown below:" << std::endl;
    val = a;
    while(val <= b){
        std::cout << val << std::endl;
        ++val;
    }
    return 0;
}