#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

student* fun()
{
    student karim(2, 5, 5.00);
    student* p = &karim;
    return p;
}

int main()
{
    student karim(2, 5, 5.00);


    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}