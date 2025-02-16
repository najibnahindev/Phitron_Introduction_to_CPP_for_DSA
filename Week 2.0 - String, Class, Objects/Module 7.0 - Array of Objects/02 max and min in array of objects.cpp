#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;

};
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
    
    student minim, maxim;
    minim.marks = INT_MAX;
    maxim.marks = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        if(st[i].marks < minim.marks) minim = st[i];
        if(st[i].marks > maxim.marks) maxim = st[i];
    }
    
    cout << minim.name << " " << minim.roll << " " << minim.marks << endl;
    cout << maxim.name << " " << maxim.roll << " " << maxim.marks << endl;
  
    return 0;
}