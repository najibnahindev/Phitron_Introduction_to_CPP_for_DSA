#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total Marks of " << name << ": " << math + english << endl;
    }
    void hello()
    {
        cout << "Hello from " << name << endl;
    }
};
int main()
{
    Student batman("I am Batman", 23, 92, 93);
    cout << batman.name << endl;
    batman.hello();

    Student spiderman("I am Spiderman", 23, 75, 69);
    cout << spiderman.name << endl;
    spiderman.hello();

    batman.total();
    spiderman.total();

    return 0;
}