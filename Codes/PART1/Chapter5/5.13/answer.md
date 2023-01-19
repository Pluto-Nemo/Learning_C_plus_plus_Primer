答：

（a）

错误：漏了case分支最后的break语句

修改：

```cpp
unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch(ch){
    case 'a':
        aCnt++;
        break; //添加break;
    case 'e':
        eCnt++;
        break;
    default:
        iouCnt++;
        break;
}

```

（b）

错误：控制流可能会绕过一个显式初始化的变量ix，该switch语句不合法

修改：

```cpp
unsigned index = some_value();
int ix = 0;	//将初始化放在外部
switch(index){
    case 1:
        ix = get_value();
        ivec[ix] = index;
        break;
    default:
        ix = ivec.size()-1;
        ivec[ix] = index;
}
```

（c）

错误：每个case标签只能对应一个值，此处一个case标签对应了多个值

修改：

```cpp
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() %10;
switch(digit){
    case 1: case 3: case 5: case 7: case 9:  //修改case标签
        oddcnt++;
        break;
    case 2: case 4: case 6: case 8: case 10:
        evencnt++;
        break;
}
```

（d）

错误：case标签的值必须是整型常量表达式，此处并非常量。

修改：

```cpp
const unsigned ival = 512, jval = 1024, kval = 4096; //添加const
unsigned bufsize;
unsigned swt = get_bufCnt();
switch(swt){
    case ival:
        bufsize = ival * sizeof(int);
        break;
    case ival:
        bufsize = jval * sizeof(int);
        break;
    case kval:
        bufsize = kval * sizeof(int);
        break;
}
```

