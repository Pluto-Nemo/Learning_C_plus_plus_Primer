# hints for 1.25

- 一种方法为将用到的名字逐个引入：

  ```cpp
  using std::cerr;
  using std::cin;
  using std::cout;
  using std::endl;
  using std::string;
  ```

  注意不要遗漏`std::cerr`

- 由于引入标准命名空间的名字较多，也可以直接使用第二种方法（建议）：`using namespace std;`直接引入标准空间中的所有名字。