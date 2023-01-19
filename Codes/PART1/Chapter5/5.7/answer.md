答：

（a）

```cpp
if(ival != ival2)
    ival1 = ival2;  //少了一个分号
else ival1 = ival2 = 0;
```

（b）

```cpp
if(ival < minal){
    minval = ival;
    occurs = 1;
}  //statement中有多条语句时，应该用花括号括起来，使它们作为一个块来执行。
```

（c）

```cpp
if(int ival = get_value())
    cout << "ival = " << ival << endl;
else 
//在if条件语句中定义的变量只能在if语句内部使用，因此if(!ival = 0)是错误的，改成else即可
    cout << "ival = 0\n";
```

（d）

```cpp
if(ival == 0)  //此处应该使用相等运算符而非赋值运算符
    ival = get_value();
```

