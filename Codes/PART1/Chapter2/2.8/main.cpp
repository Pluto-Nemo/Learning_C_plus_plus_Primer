#include <iostream>

int main()
{
    std::cout << "\62\115\12" << std::endl;
    //修改后
    std::cout << "\62\t\115\12" << std::endl;

    return 0;
}