#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore(); // ignore the enter after the input of x

    char a[100]; //can also input string like string a;
    cin.getline(a, 100);  //for input string after space

    cout << x << endl << a;

    return 0;
}