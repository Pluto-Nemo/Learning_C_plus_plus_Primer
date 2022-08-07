#include <iostream>
#include <string>

struct Sales_data
{
    std::string ID = "init"; //商品名称
    unsigned saleNum = 0;  //已销售的数量
    double perPrice = 0.0; //本次销售的商品单价
    double sumPrice = 0.0; //本次销售的商品总价
};

int main()
{
    Sales_data book;
    std::cin >> book.ID >> book.saleNum >> book.perPrice;
    book.sumPrice = book.perPrice * book.saleNum;
    std::cout << book.ID << " " << book.saleNum << " " 
              << book.perPrice << " " << book.sumPrice << std::endl;

    return 0;
}