#include <iostream>
#include <string>
#include "../Sales_data.h"

int main()
{
    Sales_data book;
    std::cin >> book.ID >> book.saleNum >> book.perPrice;
    book.sumPrice = book.perPrice * book.saleNum;
    std::cout << book.ID << " " << book.saleNum << " " 
              << book.perPrice << " " << book.sumPrice << std::endl;

    return 0;
}