#include <iostream>
#include <string>

struct Sales_data
{
    std::string ID = "init"; //商品名称
    unsigned saleNum = 0;    //已销售的数量
    double perPrice = 0.0;   //本次销售的商品单价
    double sumPrice = 0.0;   //本次销售的商品总价
};

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
    sum.perPrice = sum.sumPrice / sum.saleNum;
    std::cout << sum.ID << " " << sum.saleNum << " "
              << sum.perPrice << " " << sum.sumPrice << std::endl;
    return 0;
}
