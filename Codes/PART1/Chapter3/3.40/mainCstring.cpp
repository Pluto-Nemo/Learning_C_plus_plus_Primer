#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

int main()
{
    const char s1[] = "A string example";
    const char s2[] = "A different string";
    char s3[30] = "";
    strcpy(s3, s1);
    strcat(s3, " ");
    strcat(s3, s2);
    //test:
    char *p = s3;
    while(*p){
        cout << *p << endl;
        ++p;
    }
    
    return 0;
}