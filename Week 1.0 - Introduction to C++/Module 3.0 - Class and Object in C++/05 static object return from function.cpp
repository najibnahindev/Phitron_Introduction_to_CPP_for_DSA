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
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

student fun()
{
    student karim(64, 4, 2.25);
    return karim; 
}

int main()
{
    student obj = fun();

    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}