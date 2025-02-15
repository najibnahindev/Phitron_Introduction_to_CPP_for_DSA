#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }
    
    int ecount = 0, gcount = 0, ycount = 0, pcount = 0, tcount = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'e') ecount++;
        else if(str[i] == 'g') gcount++;
        else if(str[i] == 'y') ycount++;
        else if(str[i] == 'p') pcount++;
        else if(str[i] == 't') tcount++;
    }
    
    cout << min({ecount, gcount, ycount, pcount, tcount}) << endl;

    return 0;
}