#include <iostream>
#include "Sales_items.h"

int main()
{
    Sales_item book1, book2;
    int cnt = 1;
    std::cout << "Please enter a number of sales records:" << std::endl;
    if(std::cin >> book1){
        while(std::cin >> book2){
            if(compareIsbn(book1, book2)){
                ++cnt;
            }else{
                std::cout << book1.isbn() << " has " << cnt << " record(s)." << std::endl;
                book1 = book2;
                cnt = 1;
            }
        }
        std::cout << book1.isbn() << " has " << cnt << " record(s)." << std::endl;
    }else{
        std::cout << "Incorrect input." << std::endl;
        return -1;
    }

    return 0;
}