#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int n1 = s.length();
        int n2 = t.length();
        int lcm = (n1 * n2) / __gcd(n1, n2);
        string s1 = "", s2 = "";
        for (int i = 0; i < lcm / n1; i++)
        {
            s1 += s;
        }
        for (int i = 0; i < lcm / n2; i++)
        {
            s2 += t;
        }

        if (s1 == s2)
        {
            cout << s1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}