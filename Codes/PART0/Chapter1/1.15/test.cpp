#include <iostream>

int main()
{
    // 错误:endl后使用了冒号而非分号
     std::cout << "Read each file." << std::endl:
    // error: expected ';' before ':' token

    // 错误:字符串字面常量的两侧漏掉了引号
     std::cout << Update master. << std::endl;
    // error: 'Update' was not declared in this scope

    // 错误:漏掉了第二个输出运算符
     std::cout << "Write new master." std::endl;
    // error: expected ';' before 'std'

    // 错误:return语句漏掉了分号
     return 0
    // error: expected ';' before '}' token

    //声明错误
    int v1 = 0, v2 = 0;
    //错误:使用了了v 而非v1
    std::cin >> v >> v2;
    // error: 'v' was not declared in this scope; did you mean 'v2'?
    //错误:cout未定义
    cout << v1+v2 << std::endl;
    // error: 'cout' was not declared in this scope; did you mean 'std::cout'?

}