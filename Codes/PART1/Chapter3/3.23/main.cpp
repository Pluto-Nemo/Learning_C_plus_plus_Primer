#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> ivec(10,2);
    for (auto it = ivec.begin(); it != ivec.end(); ++it){
        *it = 2 * (*it);
        cout << *it ;
    }
    cout << endl;
    return 0;
}