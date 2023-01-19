答：

（a）

含义：当字符串s的迭代器iter指向字符串的尾后时，跳出循环。

存在问题：iter未经初始化就直接使用了。

修改：iter需要在外部进行初始化

```cpp
string::iterator iter = s.begin();
while(iter != s.end()) { /*...*/ }
```



（b）

含义：当find(word)的结果是false时，跳出循环，并执行if语句的循环体。

存在问题：status在跳出循环时的值一定是false，所以if的判断条件是多余的。

修改：删掉if语句的判断部分。另外如果if语句的执行部分也有用到status的话，则status要定义在while循环外部。

```cpp
while(bool status = find(word)){ /*...*/ }
/*...*/
```

