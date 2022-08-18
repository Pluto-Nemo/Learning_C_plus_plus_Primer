#include <iostream>
#include <iterator>
using std::begin;
using std::cout;
using std::end;
using std::endl;

int main()
{
    int ia1[] = {0, 2, 4, 6, 8};
    int ia2[] = {0, 2, 4, 5, 7};
    int *p1 = ia1;
    int *p2 = ia2;
    int *pend1 = end(ia1);
    int *pend2 = end(ia2);
    int flag = 0;

    while(p1 != pend1 && p2 != pend2){
        if(*p1 != *p2){
            flag = 1;
        }
        ++p1; ++p2;
    }
    if(flag == 0){
        cout << "ia1 is equivalent to ia2." << endl;
    }else{
        cout << "ia1 is not equivalent to ia2." << endl;
    }

    return 0;
}
