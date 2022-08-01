#include <iostream>

int main()
{
    int sum = 0, val = 0;
    std::cout << "Please enter a set of integers:" << std::endl;
    while(std::cin >> val){
        sum += val;
    }
    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}