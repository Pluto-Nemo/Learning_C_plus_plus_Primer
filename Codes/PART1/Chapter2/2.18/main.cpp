#include <iostream>

int main()
{
    int obj1 = 1, obj2 = 2;
    int* p = &obj1;
    std::cout << "obj1: " << obj1 << "  &obj1: " << &obj1 << std::endl;
    std::cout << "obj2: " << obj2 << "  &obj2: " << &obj2 << std::endl;
    std::cout << "p: " << p << std::endl;
    std::cout << "*p:" << *p << std::endl;

    std::cout << "更改指针的值：" << std::endl;
    p = &obj2;
    std::cout << "obj1: " << obj1 << "  &obj1: " << &obj1 << std::endl;
    std::cout << "obj2: " << obj2 << "  &obj2: " << &obj2 << std::endl;
    std::cout << "p: " << p << std::endl;
    std::cout << "*p:" << *p << std::endl;

    std::cout << "更改指针所指对象的值：" << std::endl;
    *p += 1;
    std::cout << "obj1: " << obj1 << "  &obj1: " << &obj1 << std::endl;
    std::cout << "obj2: " << obj2 << "  &obj2: " << &obj2 << std::endl;
    std::cout << "p: " << p << std::endl;
    std::cout << "*p:" << *p << std::endl;

    return 0;
}