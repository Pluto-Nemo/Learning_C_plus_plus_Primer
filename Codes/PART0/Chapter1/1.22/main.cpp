#include <iostream>
#include "Sales_items.h"

int main()
{
    Sales_item sum, book;
    std::cin >> sum;
    while(std::cin >> book){
        sum += book;
    }
    std::cout << sum << std::endl;
    
    return 0;
}