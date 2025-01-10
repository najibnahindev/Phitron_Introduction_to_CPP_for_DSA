#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    cout << min(10, 15) << endl; //min of two values
    cout << max(10 , 15) << endl; //max of two values

    cout << min({4, 5, 7, 9, 1, 14, 17}) << endl; //min of many values
    cout << max({4, 5, 7, 9, 1, 14, 17}) << endl; //max of many values

    return 0;
}
