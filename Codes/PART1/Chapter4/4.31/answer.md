答：

原因在4.5节陈述过：除非必须，否则不用后置版本。如果我们不需要修改前的值，那么后置版本的操作就是一种浪费。

在本程序中只需要把`++ix,--cnt`改为`ix++,cnt--`即可。

```cpp
vector<int>::size_type cnt = ivec.size();
for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
	ivec[ix]=cnt;
```

