答：
a）标准输入流的右边应该是是变量而不是表达式
改为`int input_value;   std::cin >> input_value;`
b）用列表初始化的情况下存在信息丢失
改为`int i = 3.14;`
c）将9999.99初始化给wage然后再将`wage = 9999.99`的值初始化给salary
d）将字面值3.14自动转化类型为int后把3初始化给给i