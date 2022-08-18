#include <iostream>
#include <vector>
using std::vector;

int main()
{
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec2;
    vec2 = vec;

    return 0;
}