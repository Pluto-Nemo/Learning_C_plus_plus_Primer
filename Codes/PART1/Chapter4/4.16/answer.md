答：

（a）

```cpp
if (p = getPtr() != 0)
```

预期可能是希望首先将getPtr函数的返回值赋给p，然后比较p和0是否相等。

但由于赋值运算符的优先级低于关系运算符，所以实际的运算过程是先比较getPtr函数的返回值和0是否相等，然后把比较的结果以布尔值的形式赋给p。

修改方式：给赋值部分加上括号

```cpp
if ((p = getPtr()) != 0)
```





（b）

```cpp
if (i = 1024)
```

预期可能是希望比较i和1024是否相等。

但是相等运算符实际上是有两个等号的（`==`），所以实际的运算过程是将1024赋值给i。

修改方式：将赋值运算符`=`改成相等运算符`==`。

