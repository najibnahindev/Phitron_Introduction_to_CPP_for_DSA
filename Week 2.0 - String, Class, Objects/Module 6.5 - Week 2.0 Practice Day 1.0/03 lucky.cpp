#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;
        int j = 0;
        if(str[j] + str[j + 1] + str[j + 2] == str[j + 3] + str[j + 4] + str[j + 5]) cout << "YES" << endl;
        else cout << "NO" << endl;   
    }    

    return 0;
}