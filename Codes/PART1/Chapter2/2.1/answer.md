#### short、int、long、long long的区别

- **short**：

  最小尺寸为16位

- **int**：

  最小尺寸为16位，一个int至少和一个short一样大

  unsigned int 可以缩写为unsigned

- **long**：

  最小尺寸为32位，一个long至少和一个int一样大

- **long long**：

  最小尺寸为64位，一个long long至少和一个long一样大

  在实际应用中，short常常太小，而long一般与int尺寸相同，因此如果数值超过了int的表示范围，应使用long long



#### 无符号类型和带符号类型的区别

- **signed**：

  可以表示正数、负数或0

- **unsigned**：

  仅能表示大于等于0的值



#### float和double的区别

- **float**：

  为单精度浮点数，最小尺寸为6位有效数字

- **double**：

  为双精度浮点数，最小尺寸为10位有效数字

  执行浮点数运算选用double，因为float通常精度不够，且双精度浮点数和单精度浮点数的计算代价相差无几（对于某些机器来说，双精度运算甚至比单精度更快）

  