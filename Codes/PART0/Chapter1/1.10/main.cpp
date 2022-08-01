#include <iostream>

int main()
{
    int val = 10;
    std::cout << "The numbers between 10 and 0 are shown below." << std::endl;
    while(val-1 > 0){
        --val;
        std::cout << val << std::endl;
    }

    return 0;
}