# hints for 3.8

需要注意下标运算符接受的参数是string::size_type类型的值，整型值也可以，不过要注意符号，如果索引是signed类型的值就会被自动转换成由string::size_type表达的无符号类型，可能出错。