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
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll res = 0;

        for (ll i = n - 1; i > 0; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                ll k = (arr[i - 1] - 1) / arr[i];
                res += k;
                arr[i - 1] = arr[i - 1] / (k + 1);
            }
        }

        cout << res << endl;
    }
}