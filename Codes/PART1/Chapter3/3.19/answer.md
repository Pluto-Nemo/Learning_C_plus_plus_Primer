答：

```cpp
//方法一
vector<int> ivec1(10,42);
//方法二
vector<int> ivec2{42,42,42,42,42,42,42,42,42,42};
//方法三
vector<int> ivec3;
for(i=0;i<10;++i){
    ivec3.push_back(42);
}
```

方法一更好，更简洁明了。