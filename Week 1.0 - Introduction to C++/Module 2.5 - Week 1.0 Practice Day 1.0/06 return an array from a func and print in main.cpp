#include<bits/stdc++.h>
using namespace std;
int* get_array(int no)
{
    int* arr = new int[no];
    for (int i = 0; i < no; i++)
    {
        cin >> arr[i];
    }
    
    return arr;
}
int main()
{
    int n;
    cin >> n;

    int *brr = get_array(n);
    for (int i = 0; i < n; i++)
    {
        cout << brr[i] << " ";
    }

    return 0;
}