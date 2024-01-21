#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        vector<ll> b(m);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll la, ra, lb, rb;
        la = 0;
        ra = n - 1;
        lb = 0;
        rb = m - 1;

        ll ans = 0;
        while (la <= ra)
        {
            ll left = abs(a[la] - b[rb]);
            ll right = abs(a[ra] - b[lb]);

            if (left >= right)
            {
                ans += left;
                la++, rb--;
            }
            else
            {
                ans += right;
                ra--, lb++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}