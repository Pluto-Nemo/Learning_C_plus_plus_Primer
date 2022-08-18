答：

```cpp
//定义并初始化了一个字符数组ca
const char ca[] = {'h','e','l','l','o'}; 
//定义一个指针cp，指向数组ca的首元素
const char *cp = ca;
//逐个输出cp中的字符，如果cp不指向任何元素，则跳出while循环
while (*cp){ 	
    cout << *cp << endl;
    ++cp;
}

//输出结果：
h
e
l
l
o
```

