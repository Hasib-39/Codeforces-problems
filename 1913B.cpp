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
        int _0 = 0, _1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                _0++;
        }
        _1 = n - _0;
        int j = 0;
        while (_0 >= 0 && _1 >= 0)
        {
            if (s[j] == '0')
            {
                _1--;
            }
            else
            {
                _0--;
            }
            j++;
        }
        cout << n - j + 1 << endl;
    }
}