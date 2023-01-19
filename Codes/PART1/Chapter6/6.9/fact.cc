#include "Chapter6.h"

int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}

void fact()
{
    std::cout << "Please enter an integer:";
    unsigned n = 0;
    std::cin >> n;
    int ret = 1;
    while (n > 1)
        ret *= n--;
    std::cout << "n! = " << ret << std::endl;
}

double abs(double num)
{
    if (num < 0)
        return (-1) * num;
    else
        return num;
}
