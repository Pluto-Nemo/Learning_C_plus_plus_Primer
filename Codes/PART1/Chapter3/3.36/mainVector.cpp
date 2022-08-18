#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec1 = {0, 2, 4, 6, 8};
    vector<int> ivec2 = {0, 2, 4, 5, 7};
    auto it1 = ivec1.begin();
    auto it2 = ivec2.begin();
    auto end1 = ivec1.end();
    auto end2 = ivec2.end();
    int flag = 0;

    while(it1 != end1 && it2 != end2){
        if(*it1 != *it2){
            flag = 0;
        }
        ++it1;  ++it2;
    }
    if (flag == 0){
        cout << "ivec1 is equivalent to ivec2." << endl;
    }else{
        cout << "ivec1 is not equivalent to ivec2." << endl;
    }

    return 0;
}
