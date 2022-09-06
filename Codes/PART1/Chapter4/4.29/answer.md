答：

对数组执行sizeof运算得到整个数组所占空间的大小，对指针执行sizeof运算得到指针本身所占空间的大小，对解引用指针执行sizeof运算则得到指针指向的对象所占空间的大小。

所以：

```cpp
cout << sizeof(x)/sizeof(*x) << endl;	
```

输出结果：10

相当于`sizeof(int)*10/sizeof(int)`

```cpp
cout << sizeof(p)/sizeof(*p) << endl;
```

输出结果：1

相当于`sizeof(int*)/sizeof(x[0])`，也相当于`sizeof(int*)/sizeof(int)`

