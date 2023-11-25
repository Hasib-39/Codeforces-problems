#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        vector<ll> v1;
        ll temp = 0, zero = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] != '0')
                temp = -1;
            else
            {
                zero++;
                v1.push_back(i - v1.size());
            }
        }

        vector<ll> v2(n, 0);
        for (ll i = 0; i < v1.size(); i++)
        {
            if (i <= 0)
                v2[i] = v1[i];
            else
            {
                v2[i] = v1[i] + v2[i - 1];
            }
        }

        for (ll i = 1; i <= n; i++)
        {
            if (zero >= i)
                cout << v2[i - 1] << " ";
            else
                cout << -1 << " ";
        }
        cout << endl;
    }
}