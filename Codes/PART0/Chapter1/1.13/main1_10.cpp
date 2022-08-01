#include <iostream>

int main()
{
    int val = 10;
    std::cout << "The numbers between 10 and 0 are shown below." << std::endl;
    for(val -= 1 ; val > 0; --val){
        std::cout << val << std::endl;
    }

    return 0;
}