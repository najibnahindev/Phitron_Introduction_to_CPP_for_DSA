#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int minimum = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int current_value = arr[i] + arr[j] + j - i;
                minimum = min(current_value, minimum);
            }
        }
        cout << minimum << endl;
    }

    return 0;
}
