#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data
{
    string ID = "init";      //商品名称
    unsigned saleNum = 0;    //已销售的数量
    double perPrice = 0.0;   //本次销售的商品单价
    double sumPrice = 0.0;   //本次销售的商品总价
};

int main()
{
    Sales_data book, sum;
    cin >> sum.ID >> sum.saleNum >> sum.perPrice;
    sum.sumPrice = sum.perPrice * sum.saleNum;
    while (cin >> book.ID >> book.saleNum >> book.perPrice)
    {
        book.sumPrice = book.perPrice * book.saleNum;
        sum.saleNum += book.saleNum;
        sum.sumPrice += book.sumPrice;
        if (sum.sumPrice != 0){
            sum.perPrice = sum.sumPrice / sum.saleNum;
        }else{
            cout << "No sales!" << endl;
            return 1;
        }
    }
    cout << sum.ID << " " << sum.saleNum << " "
         << sum.perPrice << " " << sum.sumPrice << endl;

    return 0;
}