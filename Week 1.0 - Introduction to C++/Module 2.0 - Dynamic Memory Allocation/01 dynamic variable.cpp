#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10; //stack memory
    int *p = new int; //used a pointer as new int just returned an address from heap memory
    *p = 100;

    cout << *p << endl;

    return 0;
}