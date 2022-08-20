#include <iostream>
#include <iterator>
using std::begin;
using std::cout;
using std::end;
using std::endl;

int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // Use the scope for statement to manage the iteration
    for (auto &row : ia){
        for (auto col : row){
            cout << col << " ";
        }
    }
    cout << endl;

    // Use the subscript operator
    for (auto i = 0; i != 3; ++i){
        for (auto j = 0; j != 4; ++j){
            cout << ia[i][j] << " ";
        }
    }
    cout << endl;

    // Use a pointer
    for (auto p = begin(ia); p != end(ia); ++p){
        for (auto q = begin(*p); q != end(*p); ++q){
            cout << *q << " ";
        }
    }
    cout << endl;

    return 0;
}