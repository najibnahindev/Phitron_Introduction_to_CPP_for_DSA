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

int main()
{
    student rahim(25, 5, 5.00);
    student* karim = new student(10, 4, 3.5);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

    return 0;
}