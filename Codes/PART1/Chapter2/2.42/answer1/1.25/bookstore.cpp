#include <iostream>
#include <string>
#include "../Sales_data.h"

int main()
{
    Sales_data book, sum;
    int cnt = 1;
    if (std::cin >> sum.ID >> sum.saleNum >> sum.perPrice){
        sum.sumPrice = sum.perPrice * sum.saleNum;
        while (std::cin >> book.ID >> book.saleNum >> book.perPrice){
            book.sumPrice = book.perPrice * book.saleNum;
            if (book.ID == sum.ID){
                ++cnt;
                sum.saleNum += book.saleNum;
                sum.sumPrice += book.sumPrice;
                if (sum.sumPrice != 0){
                    sum.perPrice = sum.sumPrice / sum.saleNum;
                }else{
                    std::cout << "No sales!" << std::endl;
                    return 1;
                }
            }
            else{
                std::cout << sum.ID << " " << sum.saleNum << " " 
                          << sum.perPrice << " " << sum.sumPrice << std::endl;
                sum = book;
                cnt = 1;
            }
        }
        std::cout << sum.ID << " " << sum.saleNum << " "
                  << sum.perPrice << " " << sum.sumPrice << std::endl;
    }
    else{
        std::cerr << "No data ?!" << std::endl;
        return -1;
    }
    return 0;
}