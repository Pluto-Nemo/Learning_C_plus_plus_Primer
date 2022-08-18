#include <iostream>
#include <iterator>
using std::begin;
using std::cout;
using std::end;
using std::endl;

int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    int *pbeg = begin(arr);
    int *pend = end(arr);
    while(pbeg != pend){
        *pbeg = 0;
        ++pbeg;
    }
    //test code:
    // pbeg = begin(arr);
    // while (pbeg != pend){
    //     cout << *pbeg << endl;
    //     ++pbeg;
    // }
    return 0;
}