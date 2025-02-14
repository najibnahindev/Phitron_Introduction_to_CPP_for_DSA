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

    *nasir = *boult;

    delete boult;
    cout << nasir->country << " " << nasir->jersey << endl;

    return 0;
}