答：

（a）如果fval是0，则转换成false；反之，转换成true。

（b）ival先转换成float，转换后的值与fval相加，相加后所得的值再转换成double。

（c）cval先提升成int，然后该int值与ival相乘，所得的积转换成double后与dval相加。