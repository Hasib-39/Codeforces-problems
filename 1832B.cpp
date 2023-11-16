#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll v[200010];
        ll x;
        for (ll i = 1; i <= n; i++)
        {
            cin >> x;
            v[i] = x;
        }

        sort(v + 1, v + n + 1);

        ll sum = 0;
        for (int i = 2; i <= n; i++)
        {
            v[i] += v[i - 1];
        }

        for (int i = 0; i <= k; i++)
        {
            sum = max(sum, v[n - k + i] - v[i * 2]);
        }

        cout << sum << endl;
    }
}