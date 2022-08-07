#include <iostream>

int main()
{
    const int i = 42;
    auto j = i;                 // j:int
    const auto &k = i;          // k:对const int的引用
    auto *p = &i;               // p:指向const int的指针
    const auto j2 = i, &k2 = i; // j2:const int	 k2:对const int的引用

    j = 40;
    k = 40;  // error: assignment of read-only reference 'k'
    p = 40;  // error: invalid conversion from 'int' to 'const int*'
    j2 = 40; // error: assignment of read-only variable 'j2'
    k2 = 40; // error: assignment of read-only reference 'k2'

    return 0;
}