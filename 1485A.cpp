#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll cnt, ans = 1e18;

        for (ll i = 0; i * i <= a; i++)
        {
            if (b == 1 && i == 0)
            {
                continue;
            }

            cnt = i;
            ll c = a;

            while (c)
            {
                c /= (b + i);
                cnt++;
            }

            ans = min(ans, cnt);
        }
        cout << ans << endl;
    }

    return 0;
}