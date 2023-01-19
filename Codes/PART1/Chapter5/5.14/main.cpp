#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string word1 = "", word2 = "",finalword="";
    unsigned cnt = 0, max = 0;
    bool flag = false;                  // flag is used to determine whether consecutive words exist
    if(cin >> word1){                   // Make sure that the input is valid
        finalword = word1;
        cnt = 1;
        while (cin >> word2){
            if (word2 == word1){
                ++cnt;
                flag = true;
            }else{
                if(cnt > max){
                    max = cnt;
                    finalword = word1;
                }else if(cnt == max){   // There may be multiple words that appear the same number of times.
                    finalword += " and " + word1;
                }
                cnt = 1;
                word1 = word2;
            }
        }
        // When exiting the while loop, the count of the last word has not been compared to max, so compare again.
        if (cnt > max){
            max = cnt;
            finalword = word1;
        }else if (cnt == max){
            finalword += " and " + word1;
        }
        if(flag)
            cout << finalword << " occur(s) " << max << " time(s)." << endl;
        else
            cout << "There is no consecutive words." << endl;
    }else{
        cout << "Invalid input!" << endl;
    }

    return 0;
}