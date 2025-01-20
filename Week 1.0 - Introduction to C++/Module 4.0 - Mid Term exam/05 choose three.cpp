#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
      int as, sum, count = 0;
      cin >> as >> sum;
      int arr[as];
      for(int j = 0; j < as; j++)
      {
        cin >> arr[j];
      }
      
      for(int x = 0; x < as; x++)
      {
        for(int y = x + 1; y < as; y++)
        {
          for(int z = y + 1; z < as; z++)
          {
            if(arr[x] + arr[y] + arr[z] == sum) 
            {
                count = 1;
                break;
            } 
          }
          if(count == 1) break;
        }
        if(count == 1) break;
      }
      
      if(count == 1) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
  
    return 0;
}