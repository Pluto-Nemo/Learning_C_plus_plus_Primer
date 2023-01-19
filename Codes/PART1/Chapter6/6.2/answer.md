答：

都有错误

（a）return实际返回的类型和函数返回类型不一致

修改：

```cpp
string f(){ //将函数返回类型改为string
    ...
}
```



（b）未定义函数的返回类型

修改：

```cpp
int f2(int i){ /*...*/ } //给函数设定一个返回类型
```



（c）形参出现同名现象

修改：

```cpp
int calc(int v1,int v2) {/*...*/} //修改其中一个形参的名字
```



（d）函数体未使用花括号包起来

修改：

```cpp
double square(double x){ return x*x; } //添加花括号
```

