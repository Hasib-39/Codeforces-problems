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
        vector<ll> arr;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            arr.push_back(temp);
        }

        ll lo = 0, hi = 2000000007;
        while (lo < hi)
        {
            ll mid = lo + (hi - lo + 1) / 2;
            ll x = 0;
            for (ll i = 0; i < n; i++)
            {
                x += max(mid - arr[i], 0ll);
            }

            if (x <= m)
            {
                lo = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
        cout << lo << endl;
    }
}