#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    student a, b;

    cin >> a.name >> a.roll >> a.gpa;  //name without space
    cin >> b.name >> b.roll >> b.gpa;  //name without space

    cout << a. name << ": " << a.roll << " - " << a.gpa << endl;  
    cout << b. name << ": " << b.roll << " - " << b.gpa << endl;
     
    return 0;
}