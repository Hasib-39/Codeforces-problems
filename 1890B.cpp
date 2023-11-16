#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    for (size_t i = 1; i < s.length(); ++i)
        if (s[i] == s[i - 1])
            return false;
    return true;
}

void solve()
{
    string s, t;
    int n, m;
    cin >> n >> m;
    cin >> s >> t;
    if (check(s))
    {
        cout << "Yes" << endl;
        return;
    }

    if (!check(t) || *t.begin() != *t.rbegin())
    {
        cout << "No" << endl;
        return;
    }

    int _0 = 0, _1 = 0;
    for (size_t i = 1; i < s.length(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            if (s[i] == '0')
                _0 = true;
            if (s[i] == '1')
                _1 = true;
        }
    }

    if (_0 && t[0] == '0')
    {
        cout << "No" << endl;
        return;
    }
    if (_1 && t[0] == '1')
    {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}