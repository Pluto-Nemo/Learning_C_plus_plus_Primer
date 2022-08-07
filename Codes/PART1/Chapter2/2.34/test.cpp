#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;         //a:int
    const int ci = i, &cr = ci;
    auto b = ci;        //b:int
    auto c = cr;        //c:int
    auto d = &i;        //d:int*
    auto e = &ci;       //e:const int*
    const auto f = ci;  //f:const int
    auto &g = ci;       //g:对const int类型的引用

    a = 42;
    b = 42;
    c = 42;
    d = 42; // error: invalid conversion from 'int' to 'int*'
    e = 42; // error: invalid conversion from 'int' to 'int*'
    f = 42; // error: assignment of read-only variable 'f'
    g = 42; // error: assignment of read-only reference 'g'

    return 0;
}