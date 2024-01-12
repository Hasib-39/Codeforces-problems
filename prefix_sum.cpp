#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    arr[0] = 0;
    ll x;
    for (ll i = 1; i <= n; i++)
    {
        cin >> x;
        arr[i] = arr[i - 1] + x;
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}