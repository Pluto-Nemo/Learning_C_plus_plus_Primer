#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int i;
    vector<int> ivec;
    int sum = 0;
    while (cin >> i){
        ivec.push_back(i);
    }
    auto num = ivec.size();
    //改写前
    // for (decltype(num) index = 1; index < num; ++index){
    //     sum = ivec[index] + ivec[index - 1];
    //     cout << sum << endl;
    //     sum = 0;
    // }

    //改写后
    for (decltype(num) index = 0; index < num; ++index){
        sum = ivec[index] + ivec[num-1-index];
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}