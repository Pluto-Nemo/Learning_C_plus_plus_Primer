example中正确的写法：
```cpp
#include <iostream>
int main(){
    int a = 0;
    cin >> a;
    std::cout << "hello" << std::endl;
    return 0;
}
```

报错：
```
example.cpp:2:5: error: cannot declare '::main' to be a global variable
 int main{
     ^~~~
example.cpp:3:5: error: expected primary-expression before 'int'
     int a = 0;
     ^~~
example.cpp:3:5: error: expected '}' before 'int'
example.cpp:2:9: note: to match this '{'
 int main{
         ^
example.cpp:4:5: error: 'a' does not name a type
     a = "hello";
     ^
example.cpp:5:5: error: 'cin' does not name a type; did you mean 'main'?
     cin >> b;
     ^~~
     main
example.cpp:6:10: error: 'cout' in namespace 'std' does not name a type
     std::cout << hello << std::endl:
          ^~~~
In file included from example.cpp:1:
D:/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iostream:61:18: note: 'std::cout' declared here
   extern ostream cout;  /// Linked to standard output
                  ^~~~
example.cpp:8:1: error: expected declaration before '}' token
 }
 ^
```