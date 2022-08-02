#include <iostream>
#include "../Sales_item.h"

int main(){
    Sales_item itemtmp, lastitem;
    int count;
    if(std::cin >> itemtmp){
        lastitem = itemtmp;
        count = 1;
        while(std::cin >> itemtmp){
            if(itemtmp.isbn() == lastitem.isbn())
                count++;
            else{
                std::cout << lastitem.isbn() << " occurs " << count << " times." << std::endl;
                lastitem = itemtmp;
                count = 1;
            }
        }
        std::cout << lastitem.isbn() << " occurs " << count << " times." << std::endl;
        return 0;
    }
    else{
        std::cerr << "Please input at least one legal item." << std::endl;
        return -1;
    }
}