#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5};
    vector<int> ivec(arr, arr + 3);

    int iarr[3] = {0};
    unsigned i = 0;
    for(auto it : ivec){
        iarr[i] = it;
        ++i;
    }
    
    //test:
    for(auto it : ivec){
        cout << it << endl;
    }

    return 0;
}