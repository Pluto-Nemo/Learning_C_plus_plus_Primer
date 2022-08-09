# hints for 2.42

思路：

如果未定义Sales_data.h，则定义Sales_data.h，并在Sales_data.h中加入string头文件以防程序在使用Sales_data.h前未定义string头文件。

另外，不用担心是否重复定义string头文件，因为string头文件中也有通过指令判断这个预处理变量是否已经定义，如果已经定义了，则不会重复定义。

之后把2.41程序中的所有struct定义都换成`#include "../Sales_data.h"`即可