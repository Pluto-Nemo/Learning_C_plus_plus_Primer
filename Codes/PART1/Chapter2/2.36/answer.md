答：

``` cpp
int a = 3, b = 4;	//a、b:int
decltype(a) c = a;	//c:int
decltype((b)) d = a;//d:int&，d绑定到a
++c;
++d;
//结果：a=4,b=4,c=4,d=4
```

