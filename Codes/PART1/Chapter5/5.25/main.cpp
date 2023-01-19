#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    int a = 0, b = 0;
    while(1){
        try{
            cout << "Please enter two integers: ";
            cin >> a >> b;
            if (b == 0)
                throw runtime_error("b cannot be equal to 0.");
            cout << "a / b : " << a / b << endl;
        }catch(runtime_error err){
            cout << err.what()
                << "\nTry Again? Enter y or n." << endl;
            char c;
            cin >> c;
            if(!cin || c=='n')
                break;
            else
                continue;
        }
        break;
    }

    return 0;
}