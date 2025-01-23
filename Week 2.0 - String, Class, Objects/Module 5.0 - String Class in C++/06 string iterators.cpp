#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Batman";
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;  //for printing each index differently
    // }

    cout << *s.begin() << " " << *(s.end() - 1) << endl << endl;  //pointer s.begin access first index and s.end point after last endex

    for (auto it = s.begin(); it < s.end(); it++)  //we have to use [string :: iterator] instead of [auto] for C++11
    {
        cout << *it << endl;  //its a pointer so we have to derefference it
    }
    
    return 0;
}