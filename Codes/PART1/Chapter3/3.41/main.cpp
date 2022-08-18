#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(){
    int arr[] = {0, 1, 2, 3, 4, 5};
    vector<int> ivec(arr, arr + 3);
    
    //test:
    for(auto it : ivec){
        cout << it << endl;
    }

    return 0;
}