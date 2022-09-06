答：

原因：ival的类型是int，pval是指向int的指针。不能把指针的值赋给int。

可修改为：

```cpp
double dval; int ival; int *pi = 0;
dval = ival = 0;
```

