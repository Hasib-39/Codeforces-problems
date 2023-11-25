#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[300005], b[300005];
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll suma = 0, sumb = 0, mina = INT_MAX, minb = INT_MAX;
        ll vala, valb;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            suma += a[i];
            mina = min(mina, a[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            sumb += b[i];
            minb = min(minb, b[i]);
        }

        vala = mina * n + sumb;
        valb = minb * n + suma;

        cout << min(vala, valb) << endl;
    }
}