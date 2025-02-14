#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string s = "Hello";
    string s("Hello");
    cout << s << endl;  // way 1

    string sa("Hello", 3);
    cout << sa << endl;  // way 2: Resize the string

    string sb = "Hello";
    string sc(sb, 3);
    cout << sc << endl;  // way 3: Remove the string element of input value then print the rest one
    
    string sd(5, 'A');  //way 4
    cout << sd << endl;

    return 0;
}