#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200010];
void solve()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<ll> val;
    ll j = n - 1;
    while (k--)
    {
        if (arr[j] > n)
        {
            cout << "No" << endl;
            return;
        }

        if (val.count(j))
        {
            cout << "Yes" << endl;
            return;
        }

        val.insert(j);
        j -= arr[j];
        j = (j + n) % n;
    }

    cout << "Yes" << endl;
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