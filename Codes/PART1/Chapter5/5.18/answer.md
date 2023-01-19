答：

（a）

含义：每输入两个数，就输出他们的和

错误：没有使用花括号将do语句要执行的内容包括在一整个块中

修改后：

```cpp
do{
    int v1, v2;
    cout << "Please enter two numbers to sum:";
    if(cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
}while(cin);
```



（b）

含义：先执行statement，然后执行get_response()函数并赋给ival，如果ival的值不为0，则继续执行statement

错误：不能在dowhile语句的条件部分定义变量，且condition使用的变量必须定义在循环体之外

修改后：

```cpp
int ival = 0;
do{
    // ...
}while(ival = get_response());
```



（c）

含义：执行get_response()函数并赋给ival，直到ival的值为0为止

错误：condition使用的变量必须定义在循环体之外

修改后：

```cpp
int ival;
do{
    ival = get_response();
}while(ival);
```

