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
            if (book.ID == sum.ID)
                ++cnt;
            else{
                std::cout << sum.ID << " has " << cnt << " record(s)." << std::endl;
                sum = book;
                cnt = 1;
            }
        }
        std::cout << sum.ID << " has " << cnt << " record(s)." << std::endl;
    }
    else{
        std::cout << "Incorrect input." << std::endl;
        return -1;
    }

    return 0;
}