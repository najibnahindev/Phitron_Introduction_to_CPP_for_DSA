#include<bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int x = 10;
    p  = &x;
    cout << "In fun Function: " << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "In main Function: " << *p << endl;

    return 0;
}

//used online compiler for check the deletation