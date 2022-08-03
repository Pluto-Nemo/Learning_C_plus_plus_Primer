答：
a) 'a'是char,L'a'是宽字符char,"a"是字符串,L"a"是宽字符字符串
char是一种内置类型，字符串是一个数组，宽字符是指一种字符的类型（其容量和编码都不同于字符）
b) 10是int,10u是unsigned int,10L是Long,10uL是unsigned Long,012是八进制int,0xc是十六进制int
区别在于有无符号，Long和int区别在于容量，0和0x前缀表明了进制不同但是类型还都是int
c) 3.14是double,3.14f是float,3.14L是Long double
区别在于类型的容量
d) 10是int,10u是unsigned int,10.是double,10e-2是double
区别就是有无符号和类型不同