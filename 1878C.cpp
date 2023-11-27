#include <bits/stdc++.h>
using namespace std;
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define ll long long
int main()
{
    test
    {
        ll n, k, x;
        cin >> n >> k >> x;
        ll mx, mn;
        mx = ((n * (n + 1)) / 2) - ((n - k) * (n - k + 1) / 2);
        mn = (k * (k + 1)) / 2;

        if (x >= mn && x <= mx)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}