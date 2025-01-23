#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "abdfweui";
    string str0 = "BATMAN";

    str += str0;
    cout << str << endl;

    string str1 = "imaao";
    str.append(str1);  //alternative of [s += s1]
    cout << str << endl;

    str.push_back('A');  //add a charecter at the end of the string
    cout << str << endl;

    str[0] = 'Y';  //its possible but if we add a charecter after the last index like str[21] its not possible
    cout << str << endl;

    str.pop_back();  //it removes the last charecter of the string
    cout << str << endl;

    str = "Batman";  //we can change the string like this
    cout << str << endl;

    str.assign("CatWoman");  //we can also use this for change the input of a string
    cout << str << endl;

    str.erase(6);  //it will erase the string element from the input index  || we can use resize function for this
    cout << str << endl;

    str.erase(3, 2);  //  [string_name.erase(x, y)] it will delete y charecter from x index
    cout << str << endl;
 
    str.replace(3, 1, "Bat");  //string_name(from which index i want to replace, how much charecter i want to replace, what will replace)
    cout << str << endl;

    str.insert(3, " and ");  //insert something on a specific index
    cout << str << endl;

    return 0;
}