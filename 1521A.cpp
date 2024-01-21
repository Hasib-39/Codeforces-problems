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
        ll x, y, z;
        cin >> a >> b;
        x = a * b;
        y = a;
        z = a * (b + 1);
        if (b != 1)
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}