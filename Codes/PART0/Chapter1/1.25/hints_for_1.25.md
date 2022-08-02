# Hints for 1.25

+ 书店程序与书本上一样，用g++命令编译后运行exe文件，逐个数输入item信息，程序将自动输出错误或成功结果
+ 关于重定向：
可以修改Chapter1目录下的Infile.txt文件中的信息，并以该文件的内容作为输入并在1.25目录下执行
powershell:```Get-Content ../Infile.txt | ./bks | out-file ../Outfile.txt -encoding utf8```
Bash or cmd:```./bks <../Infile.txt >../Outfile.txt```