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