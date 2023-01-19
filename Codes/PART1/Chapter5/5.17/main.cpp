#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> short1 = {0};
    vector<int> long1 = {0};
    vector<int> ivec1 = {0, 1, 1, 2};
    vector<int> ivec2 = {0, 1, 2, 2, 3, 8, 5};
    //要怎么样使两个迭代器可以不写死，都可以通过输入来定义，像下面这样好像不太行。我不理解
    // vector<int> ivec1 = {0};
    // vector<int> ivec2 = {0};
    // int index = 0;
    // while(cin >> index) ivec1.push_back(index);
    // while(cin >> index) ivec2.push_back(index);
    if(ivec1.size() <= ivec2.size()){
        short1 = ivec1;
        long1 = ivec2;
    }
    vector<int>::iterator liter = long1.begin(); // liter:long iterator
    bool flag = true;                            // Use flag to determine whether short1 is the prefix of long1
    for(auto siter:short1){                      // siter:short iterator
        if (siter != *liter){
            flag = false;
            break;
        }
        ++liter;
    }
    if(flag)
        cout << "The answer is true." << endl;
    else
        cout << "The answer is false." << endl;

    return 0;
}
