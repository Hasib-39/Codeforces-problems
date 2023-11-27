#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    string s;
    while (cin >> s)
    {
        if (s == "()")
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        string d(s.length(), '(');
        d += string(s.length(), ')');
        string b = "";
        for (int i = 0; i < s.length(); ++i)
        {
            b += "()";
        }
        if (d.find(s) != string::npos)
            cout << b;
        else
            cout << d;
        cout << endl;
    }
    return 0;
}