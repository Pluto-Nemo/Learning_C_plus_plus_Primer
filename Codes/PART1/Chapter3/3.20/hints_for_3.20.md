# hints for 3.20

使用auto和decltype可以便捷地定义size_type类型。

在使用下标时，注意下标是否溢出（尤其是改写前的[index - 1]和改写后的[num - 1 - index]）