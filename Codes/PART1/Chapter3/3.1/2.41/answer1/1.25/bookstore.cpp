#include <iostream>
#include <string>
using namespace std;

struct Sales_data
{
    string ID = "init"; //商品名称
    unsigned saleNum = 0;    //已销售的数量
    double perPrice = 0.0;   //本次销售的商品单价
    double sumPrice = 0.0;   //本次销售的商品总价
};

int main()
{
    Sales_data book, sum;
    int cnt = 1;
    if (cin >> sum.ID >> sum.saleNum >> sum.perPrice){
        sum.sumPrice = sum.perPrice * sum.saleNum;
        while (cin >> book.ID >> book.saleNum >> book.perPrice){
            book.sumPrice = book.perPrice * book.saleNum;
            if (book.ID == sum.ID){
                ++cnt;
                sum.saleNum += book.saleNum;
                sum.sumPrice += book.sumPrice;
                if (sum.sumPrice != 0){
                    sum.perPrice = sum.sumPrice / sum.saleNum;
                }else{
                    cout << "No sales!" << endl;
                    return 1;
                }
            }
            else{
                cout << sum.ID << " " << sum.saleNum << " " 
                          << sum.perPrice << " " << sum.sumPrice << endl;
                sum = book;
                cnt = 1;
            }
        }
        cout << sum.ID << " " << sum.saleNum << " "
                  << sum.perPrice << " " << sum.sumPrice << endl;
    }
    else{
        cerr << "No data ?!" << endl;
        return -1;
    }
    return 0;
}