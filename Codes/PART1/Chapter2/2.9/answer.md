答：
（a）非法。输入运算符右侧接受的对象是存储输入数值的变量，此语句右侧对象是未定义的,而且int是内置类型名无法作为标识符。应该改为先定义，后给该变量赋值。

```cpp
//修改后
int input_value = 0;
std::cin >> input_value;
```



（b）非法。初始值为double，而变量类型为int，初始化存在丢失信息的风险，编译器会报错。应该把int 改为double。

```cpp
//修改后
double i = {3.14};
```



（c）非法。wage未定义。应该先定义wage，再赋值给salary。

```cpp
//修改后
double wage = 9999.99;
double salary = wage;
```



（d）合法，但存在类型转换，初始化会丢失信息。
