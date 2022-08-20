#include <iostream>
#include <iterator>
using std::begin;
using std::cout;
using std::end;
using std::endl;

using int_array = int[4];
using index = size_t;

int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // Use the scope for statement to manage the iteration
    for (int_array (&row) : ia){
        for (int col : row){
            cout << col << " ";
        }
    }
    cout << endl;

    // Use the subscript operator
    for (index i = 0; i != 3; ++i){
        for (index j = 0; j != 4; ++j){
            cout << ia[i][j] << " ";
        }
    }
    cout << endl;

    // Use a pointer
    for (int_array (*p) = begin(ia); p != end(ia); ++p){
        for (int *q = begin(*p); q != end(*p); ++q){
            cout << *q << " ";
        }
    }
    cout << endl;

    return 0;
}