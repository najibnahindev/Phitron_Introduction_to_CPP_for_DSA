#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    cout << s << endl;

    stringstream ss(s);  //pick a word from the string
    string result;

    while(ss >> result)
    {
        cout << result << endl;
    }

    return 0;
}