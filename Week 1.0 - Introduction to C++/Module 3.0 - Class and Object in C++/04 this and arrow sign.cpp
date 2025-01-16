#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa)  //constructor but same names
    {
        //(*this).roll = roll;
        this->roll = roll;  //shortcut we can use arrow (vscode will change it after giving dot)
        (*this).cls = cls;
        (*this).gpa = gpa;
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