#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100005];

    while (cin.getline(a, 100005))
    {
        int length = strlen(a);

        sort(a, a + length);

        for (int i = 0; i < length; i++)
        {
            if (a[i] != ' ') cout << a[i];
        }
        cout << endl;
    }

    return 0;
}