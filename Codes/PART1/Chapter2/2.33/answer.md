答：

```cpp
a = 42;	//运行成功
b = 42;	//运行成功
c = 42;	//运行成功
d = 42;	//报错：不能将int类型赋给int*类型
e = 42;	//报错：不能将int类型赋给const int*类型
f = 42;	//报错：f是const int类型，而表达式的左值必须可修改
g = 42;	//报错：g是对const int类型的引用，而表达式的左值必须可修改
```
