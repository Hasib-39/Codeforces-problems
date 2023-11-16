#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    int x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> mp;
        while (n--)
        {
            cin >> x;
            mp[x]++;
        }

        if (mp.size() >= 3)
            cout << "NO" << endl;

        else
        {
            if (abs(mp.begin()->second - mp.rbegin()->second) <= 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}