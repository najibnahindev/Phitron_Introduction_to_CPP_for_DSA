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

    cin.getline(a.name, 100);  //it will input the name until a new line
    cin >> a.roll >> a.gpa;

    cin.ignore();  //it will ingore the enter to take input as a name we can also use getchar();

    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a. name << ": " << a.roll << " - " << a.gpa << endl;  
    cout << b. name << ": " << b.roll << " - " << b.gpa << endl;
     
    return 0;
}