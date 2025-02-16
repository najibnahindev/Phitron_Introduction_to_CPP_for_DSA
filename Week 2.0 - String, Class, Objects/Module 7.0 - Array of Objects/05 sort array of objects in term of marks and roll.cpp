#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;

};
bool comp(student l, student r)
{
    if(l.marks < r.marks) return true;
    else if(l.marks > r.marks)  return false;
    else return l.roll < r.roll;
}
int main()
{
    int n;
    cin >> n;
    student st[n];
    
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, st[i].name);
        cin >> st[i].roll >> st[i].marks;
    }
    
    sort(st, st + n, comp);
    
    for (int i = 0; i < n; i++)
    {
        cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    }
  
    return 0;
}