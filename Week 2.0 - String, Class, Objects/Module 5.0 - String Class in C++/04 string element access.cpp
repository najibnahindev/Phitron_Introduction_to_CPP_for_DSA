#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    cout << str[0] << endl;
    cout << str.at(0) << endl;  //we can also use at function instead of index accessing
    cout << str.front() << endl;  //access the first index;

    cout << str.back() << endl;  //access the final index
    cout << str[str.size() - 1] << endl;  //access the final index another way;

    return 0;
}