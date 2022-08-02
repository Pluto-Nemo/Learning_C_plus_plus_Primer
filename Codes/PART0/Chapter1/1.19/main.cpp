#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Please enter two integers:" << std::endl;
    std::cin >> v1 >> v2;
    
    if(v1 == v2){
        std::cout << "There is no other integers between them." << std::endl;
    }else{
        std::cout << "The numbers between two integers are shown below:" << std::endl;
        if(v1 > v2){
            int tmp = 0;
            tmp = v1; v1 = v2; v2 = tmp;
        }
        while(v1 <= v2){
            std::cout << v1 << std::endl;
            ++v1;
        }
        
    }

    return 0;
}