答：

```cpp
if(42 = i)	//非法，字面值应该是右值。
if(i = 42)	//合法，将42的值赋给i，然后返回i，if的条件为真，将继续执行后面的语句
```
