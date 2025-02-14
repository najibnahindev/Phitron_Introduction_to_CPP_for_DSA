#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    char section;
    int math;
    int english;
    int cls;

    Student(string name, int roll, int math, int english) 
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
};

int main() 
{
    Student s1("Alice", 1, 85, 90);
    Student s2("Bob", 2, 92, 88);
    Student s3("Charlie", 3, 78, 95);

    Student top = s1;
    if (s2.math > top.math) 
    {
        top = s2;
    }
    if (s3.math > top.math) 
    {
        top = s3;
    }

    cout << "The student with the highest math marks is: " << top.name << endl;
    cout << "Marks in Math: " << top.math << endl;

    return 0;
}
