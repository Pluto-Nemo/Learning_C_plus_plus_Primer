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
    vector<int> v1;
    int cnt = 0;
    for(auto i : v1){
        ++cnt;
        cout << i << endl;
    }
    cout << "v1: " << cnt << "\n"
         << endl;

    vector<int> v2(10);
    cnt = 0;
    for (auto i : v2){
        ++cnt;
        cout << i << endl;
    }
    cout << "v2: " << cnt << "\n"
         << endl;

    vector<int> v3(10,42);
    cnt = 0;
    for (auto i : v3){
        ++cnt;
        cout << i << endl;
    }
    cout << "v3: " << cnt << "\n"
         << endl;

    vector<int> v4{10};
    cnt = 0;
    for (auto i : v4){
        ++cnt;
        cout << i << endl;
    }
    cout << "v4: " << cnt << "\n"
         << endl;

    vector<int> v5{10,42};
    cnt = 0;
    for (auto i : v5){
        ++cnt;
        cout << i << endl;
    }
    cout << "v5: " << cnt << "\n"
         << endl;

    vector<string> v6{10};
    cnt = 0;
    for (auto i : v6)
    {
        ++cnt;
        cout << i << endl;
    }
    cout << "v6: " << cnt << "\n"
         << endl;

    vector<string> v7{10,"hi"};
    cnt = 0;
    for (auto i : v7){
        ++cnt;
        cout << i << endl;
    }
    cout << "v7: " << cnt << "\n"
         << endl;

    return 0;
}