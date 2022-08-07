答：

```cpp
const int i = 42;
auto j = i;					//j:int
const auto &k = i;			//k:对const int的引用
auto *p = &i;				//p:指向const int的指针
const auto j2 = i, &k2 = i;	//j2:const int	 k2:对const int的引用
```

