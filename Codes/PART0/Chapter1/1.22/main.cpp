#include <iostream>
#include "../Sales_item.h"

int main(){
    Sales_item itemtmp, itemsum;
    while (std::cin >> itemtmp)
    {
        itemsum += itemtmp;
    }
    std::cout << itemsum << std::endl;
    return 0;
}