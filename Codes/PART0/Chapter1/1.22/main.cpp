#include <iostream>
#include "../Sales_item.h"
int main()
{
    Sales_item itemSum, itemBook;
    std::cin >> itemSum;
    while (std::cin >> itemBook)
    {
        itemSum += itemBook;
    }
    std::cout << itemSum << std::endl;

    return 0;
}