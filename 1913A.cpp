#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int m = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] - '0' != 0)
            {
                m = i;
                break;
            }
        }
        string a = s.substr(0, m);
        string b = s.substr(m);
        int x = stoi(a);
        int y = stoi(b);
        if (x < y)
            cout << x << " " << y << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}