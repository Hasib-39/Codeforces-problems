#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n], brr[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    set<ll> visit;
    for (ll i = 0; i < m; i++)
    {
        if (visit.count(brr[i]))
            continue;
        visit.insert(brr[i]);
        for (ll j = 0; j < n; j++)
        {
            if (arr[j] % (1 << brr[i]) == 0)
            {
                arr[j] += (1 << (brr[i] - 1));
            }
        }
    }

    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}