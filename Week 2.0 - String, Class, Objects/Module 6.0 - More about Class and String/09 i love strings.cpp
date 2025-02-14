#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    while (N--) 
    {
        string S, T, result;
        cin >> S >> T;

        int i = 0, j = 0;
        
        while (i < S.length() && j < T.length()) 
        {
            result += S[i++];
            result += T[j++];
        }
        
        while (i < S.length()) 
        {
            result += S[i++];
        }
        
        while (j < T.length()) 
        {
            result += T[j++];
        }
        
        cout << result << endl;
    }
    
    return 0;
}
