#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxim = max(a, b);
    maxim = max(maxim, c);

    int minim = min(a, b);
    minim = min(minim, c);

    cout << minim << " " << maxim << endl;

    return 0;
}