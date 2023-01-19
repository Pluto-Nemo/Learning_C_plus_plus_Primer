# hints for 5.11

cin读取输入时会跳过空白字符（见1.2节），如果要cin读取空白字符，可以设置cin读取空白符：

```cpp
cin >> noskipws;
```

如果要将cin恢复到默认状态，忽略空白符，可以恢复设置：

```cpp
cin >> skipws;
```

使用前记得引入名字：

```cpp
using std::noskipws;
```

