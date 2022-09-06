答：

如果满足左结合律，则求值过程相当于：

```cpp
finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
```

如果grade>90为真，则第一个条件表达式的结果是`"high pass"`；而`"high pass"`作为判断条件的表达式时也为真，则第二个条件表达式的结果是`"fail"`，这就自相矛盾了，显然是错误的。