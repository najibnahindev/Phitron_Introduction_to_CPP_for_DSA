#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double gpa;

    student(int r, int c, double g)  //constructor Rules, Inside the Class, Same name like Class, No return type
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main()
{
    student rahim(45, 5, 3.23);  //using constructor
    student karim(64, 4, 2.25); 

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}