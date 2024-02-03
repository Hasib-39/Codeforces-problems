#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    long long n, a, b;
    cin >> n >> a >> b;
    long long y = n;
    if (n == 1)
    {
        if (a == b)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        cout << a << ":" << b << endl;
        return 0;
    }
    vector<pair<int, int>> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        v[i].first = 0;
        v[i].second = 0;
    }

    int draw = 0;
    int match = 1;
    while (match <= n)
    {
        if (a > 0)
        {
            a--;
            v[match].first++;
            match++;
        }
        else
        {
            break;
        }
    }
    if (a > 0)
    {
        v[1].first += a;
    }

    if (b)
    {
        if (match == n + 1)
        {
            v[1].first++;
            v[n].first--;
            v[n].second = b;
        }
        else
        {
            while (match <= n)
            {
                if (b > 0)
                {
                    b--;
                    v[match].second++;
                    match++;
                }
                else
                {
                    break;
                }
            }
            if (b > 0)
            {
                v[n].second += b;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i].first == v[i].second)
        {
            draw++;
        }
    }

    cout << draw << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << v[i].first << ":" << v[i].second << endl;
    }
    return 0;
}
