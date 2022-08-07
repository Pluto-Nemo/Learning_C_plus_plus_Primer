答：

```cpp
int a = 3, b = 4;		//a:int 值为3  b:int 值为4
decltype(a) c = a;		//c:int 值为3
decltype(a = b) d = a;	//d:int& 值为3
```

