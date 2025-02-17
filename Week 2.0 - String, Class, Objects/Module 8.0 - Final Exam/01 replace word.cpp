#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, X;
        cin >> S >> X;
        string result = "";

        for (int i = 0; i < S.size();)
        {
            bool match = true;
            for (int j = 0; j < X.size(); j++)
            {
                if (i + j >= S.size() || S[i + j] != X[j])
                {
                    match = false;
                    break;
                }
            }
            if (match)
            {
                result += '#';
                i += X.size();
            }
            else
            {
                result += S[i];
                i++;
            }
        }
        cout << result << endl;
    }

    return 0;
}