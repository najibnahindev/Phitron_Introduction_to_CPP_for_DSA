#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, res;
    char c, d;
    cin >> a >> c >> b >> d >> res;

    if((c == '+') && a + b == res) cout << "Yes" << endl;
    else if((c == '+') && a + b != res) cout << a + b << endl;
    else if((c == '-') && a - b == res) cout << "Yes" << endl;
    else if((c == '-') && a - b != res) cout << a - b << endl;
    else if((c == '*') && a * b == res) cout << "Yes" << endl;
    else cout << a * b << endl;

    return 0;
}