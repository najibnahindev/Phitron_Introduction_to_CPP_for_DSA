#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    string main = str;

    reverse(str.begin(), str.end());

    if(main == str) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}