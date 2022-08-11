#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data
{
    string ID = "init";    //商品名称
    unsigned saleNum = 0;  //已销售的数量
    double perPrice = 0.0; //本次销售的商品单价
    double sumPrice = 0.0; //本次销售的商品总价
};

int main()
{
    Sales_data book;
    cin >> book.ID >> book.saleNum >> book.perPrice;
    book.sumPrice = book.perPrice * book.saleNum;
    cout << book.ID << " " << book.saleNum << " " 
         << book.perPrice << " " << book.sumPrice << endl;

    return 0;
}