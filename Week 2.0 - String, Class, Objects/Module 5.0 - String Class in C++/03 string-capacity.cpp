#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "abcde fhfjwFE";

    cout << a.size() << endl;  //size of the string function [string_name.size()]
    cout << a.max_size() << endl;  //max size of a string function can put [string_name.max_size()]
    cout << a.capacity() << endl;  //capacuty of the string function [string_name.capacity()]
    
    string str = "Batman";
    str.clear();  //clear the string [string_name.size()]
    cout << str.size() << endl;  //it will show 0 as output as we cleard the string

    if(str.empty() == true) cout << "Empty String" << endl;  //string empty or not function [string_name.empty()] its basically check [str.size == 0?]
    else cout << "Not Empty" << endl;

    string abc = "I am Batman";  //here string size is 11
    abc.resize(7);  //we just resized the string
    cout << abc << endl;  //it will show the function till size 7

    abc.resize(13, 'y');  //we increased the size here and added 'y' charecter in place of every null charecter 
    cout << abc << endl;

    return 0; 
}