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
    //改写前
    // auto ivec1 = ivec.begin();
    // auto ivec2 = ivec.begin() + 1;
    // auto end = ivec.end();
    // while (ivec2 != end){    //If the position to which the iterator points reaches the end, then break
    //     sum = *ivec1 + *ivec2;
    //     cout << sum << endl;
    //     sum = 0;
    //     ++ivec1;  ++ivec2;   //Moves the iterator back one position
    // }

    //改写后
    auto ivec1 = ivec.begin();
    auto ivec2 = ivec.end() - 1;
    auto beg = ivec.begin();
    auto end = ivec.end();
    while(ivec1 != end && ivec2 != beg - 1){ // If iterator 1 points to a position after the end, or iterator 2 points to a position before the first element, the break
        sum = *ivec1 + *ivec2;
        cout << sum << endl;
        ++ivec1;   --ivec2;     // Moves iterator 1 back one position and iterator 2 forward one position
    }

    return 0;
}