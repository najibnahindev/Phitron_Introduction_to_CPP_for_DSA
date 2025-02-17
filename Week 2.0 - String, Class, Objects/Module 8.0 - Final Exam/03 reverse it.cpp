#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin >> n;
    student stu[n];

    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].nm >> stu[i].cls >> stu[i].s >> stu[i].id;
    }

    for (int i = 0; i < n; i++)
    {
        cout << stu[i].nm << " " << stu[i].cls << " " << stu[n - i - 1].s << " " << stu[i].id << endl;
    }
    
    return 0;
}