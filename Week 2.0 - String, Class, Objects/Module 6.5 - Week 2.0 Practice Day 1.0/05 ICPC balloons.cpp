#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, arr[26] = {0}, sum = 0;
        cin >> n;
        string str;
        cin >> str;

        for (int j = 0; j < n; j++)
        {
            if(arr[str[j] - 'A'] == 0)
            {
                arr[str[j] - 'A'] += 2;
            }
            else if(arr[str[j] - 'A'] >= 2) arr[str[j] - 'A'] += 1;
        }   
        for (int a = 0; a < 26; a++)
        {
            sum += arr[a];
        }
        cout << sum << endl;        
    } 

    return 0;
}