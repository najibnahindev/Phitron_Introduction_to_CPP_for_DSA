#include<bits/stdc++.h>
using namespace std;
class stuInfo
{
    public:
    int id;
    char name[100];
    char section;
    int tmarks;
};
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        stuInfo arr[3];
        for (int k = 0; k < 3; k++)
        {
            cin >> arr[k].id >> arr[k].name >> arr[k].section >> arr[k].tmarks;
        }
        int maxmarks = arr[0].tmarks;
        for (int j = 1; j < 3; j++)
        {
            if(arr[j].tmarks >= maxmarks) maxmarks = arr[j].tmarks;
        }

        for (int j = 0; j < 3; j++)
        {
            if(arr[j].tmarks == maxmarks) 
            {
                cout << arr[j].id << " " << arr[j].name  << " " << arr[j].section << " " << arr[j].tmarks << endl;
                break;
            }
        }   
    }

    return 0;
}