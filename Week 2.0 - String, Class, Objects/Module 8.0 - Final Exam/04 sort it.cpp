#include <bits/stdc++.h>
using namespace std;
class students
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(students a, students b)
{
    return (a.math_marks + a.eng_marks) == (b.math_marks + b.eng_marks) ? (a.id < b.id) : (a.math_marks + a.eng_marks) > (b.math_marks + b.eng_marks);
}
int main()
{
    int n;
    cin >> n;
    students st[n];

    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
    }

    sort(st, st + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << endl;
    }

    return 0;
}