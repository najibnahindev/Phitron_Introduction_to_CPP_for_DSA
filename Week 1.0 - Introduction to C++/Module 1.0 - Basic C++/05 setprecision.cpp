// setprecision - how many digit i want to print

#include<iostream>
#include<iomanip> //new header file for setprecision - input output manipulation
using namespace std;
int main()
{
    double d = 34.6932;
    cout << fixed << setprecision(2) << d << endl;  // fixed << setprecision(how many digit i want)

    return 0;
}