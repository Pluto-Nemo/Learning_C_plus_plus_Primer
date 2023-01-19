编译过程如下，为windows环境：

```powershell
$ g++ -c factMain.cc fact.cc     # 生成factMain.o和fact.o
$ g++ factMain.o fact.o -o main  # 生成main.exe
$ main.exe					     # 运行main.exe，直接输入main也可以
```

