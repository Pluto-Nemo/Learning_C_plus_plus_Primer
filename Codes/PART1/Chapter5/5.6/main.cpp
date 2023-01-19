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
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    unsigned grade = 0;
    string lettergrade;
    while(cin >> grade){
        lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
        lettergrade += (grade < 60 || grade == 100) ? "" : grade % 10 > 7 ? "+"
                                                         : grade % 10 < 3 ? "-"
                                                                          : "";
        cout << lettergrade << endl;
    }
    return 0;
}