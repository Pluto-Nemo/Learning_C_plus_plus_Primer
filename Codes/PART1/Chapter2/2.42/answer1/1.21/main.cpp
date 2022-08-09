#include <iostream>
#include <string>
#include "../Sales_data.h"

int main()
{
    Sales_data book1, book2, sum;
    std::cin >> book1.ID >> book1.saleNum >> book1.perPrice;
    std::cin >> book2.ID >> book2.saleNum >> book2.perPrice;

    book1.sumPrice = book1.perPrice * book1.saleNum;
    book2.sumPrice = book2.perPrice * book2.saleNum;

    sum.ID = book1.ID;
    sum.sumPrice = book1.sumPrice + book2.sumPrice;
    sum.saleNum = book1.saleNum + book2.saleNum;
    if(sum.sumPrice != 0){
        sum.perPrice = sum.sumPrice / sum.saleNum; 
    }else{
        std::cout << "No sales!" << std::endl;
        return 1;
    }
    std::cout << sum.ID << " " << sum.saleNum << " "
              << sum.perPrice << " " << sum.sumPrice << std::endl;
    return 0;
}
