#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
using std::endl;

int main()
{
    int i;
    vector<int> ivec;
    while(cin >> i){
        ivec.push_back(i);
    }

    return 0;
}