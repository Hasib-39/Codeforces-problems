#include <bits/stdc++.h>

using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        priority_queue<int> pq;
        int flag = 1;
        cin >> k;
        if (k != 1)
            flag = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> k;
            pq.push(k);
            if (k > n)
                flag = 0;
        }
        int x, y;
        x = pq.top();
        if (x != n)
            flag = 0;
        if (flag)
        {
            while (pq.size() != 1)
            {
                x = pq.top();
                pq.pop();
                if (abs(x - pq.top()) != 1)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}