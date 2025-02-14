#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    string country;
    int jersey;
    
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
    Cricketer* nasir =  new Cricketer("Bangladesh", 69);
    Cricketer* boult =  new Cricketer("Newzeland", 96);

    // nasir->country = boult->country;  //proper way to copy and we won't use nasir = boult
    // nasir->jersey = boult->jersey;

    *nasir = *boult;  //we can simply use this instead of line 21 and 22

    delete boult;
    cout << nasir->country << " " << nasir->jersey << endl;

    return 0;
}