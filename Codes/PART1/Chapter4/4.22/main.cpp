#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    unsigned grade = 0;
    string finalgrade = "";
    cin >> grade;
    //using conditional operators
    // finalgrade = (grade > 90) ? "high pass" 
    //                           : (grade < 60) ? "fail"
    //                           : (grade < 75) ? "low pass" : "pass";

    //using the if statement
    if (grade > 90)
        finalgrade = "high pass";
    else{
        if (grade < 60)
            finalgrade = "fail";
        else{
            if (grade < 75)
                finalgrade = "low pass";
            else
                finalgrade = "pass";
        }
    }
    cout << finalgrade << endl;

    return 0;
}