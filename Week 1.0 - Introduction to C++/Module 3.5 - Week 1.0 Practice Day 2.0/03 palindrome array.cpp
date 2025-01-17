#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, counter = 0;
    cin >> n;

    int arr[n], brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }    
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        if(brr[i] != arr[i]) counter = 1;
    }
    
    if(counter == 1) cout << "NO" << endl;
    else cout << "YES" << endl;
    
    return 0;
}