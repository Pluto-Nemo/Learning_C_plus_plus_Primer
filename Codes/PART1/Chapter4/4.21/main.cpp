#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec = {1, 3, 6, 11, 59, 41, 66, 9, 8, 4};
    for(auto& iter : ivec){
        if(iter%2 == 1) 
            iter *= 2;
    }
    for(auto iter : ivec){
        cout << iter << endl;
    }

    return 0;
}