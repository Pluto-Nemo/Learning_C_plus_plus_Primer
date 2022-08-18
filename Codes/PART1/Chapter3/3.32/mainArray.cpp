#include <iostream>

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[10];
    for (size_t i = 0; i < 10; ++i){
        arr2[i] = arr[i];
    }

    return 0;
}