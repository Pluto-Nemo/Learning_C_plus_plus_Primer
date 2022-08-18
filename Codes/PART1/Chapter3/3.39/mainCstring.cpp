#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

int main()
{
    const char s1[] = "A string example";
    const char s2[] = "A different string";
    if (!strcmp(s1,s2)){
        cout << "s1 is smaller than s2." << endl;
    }else{
        cout << "s1 is bigger than s2." << endl;
    }

    return 0;
}