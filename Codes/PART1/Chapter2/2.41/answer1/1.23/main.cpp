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
    std::cout << "Please enter a number of sales records:" << std::endl;
    if (std::cin >> book1)
    {
        while (std::cin >> book2)
        {
            if (book1.isbn() == book2.isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout << book1.isbn() << " has " << cnt << " record(s)." << std::endl;
                book1 = book2;
                cnt = 1;
            }
        }
        std::cout << book1.isbn() << " has " << cnt << " record(s)." << std::endl;
    }
    else
    {
        std::cout << "Incorrect input." << std::endl;
        return -1;
    }

    return 0;
}