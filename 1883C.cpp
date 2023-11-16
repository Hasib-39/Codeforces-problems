#include <bits/stdc++.h>
using namespace std;
int findClosest(int n, int m)
{
    int q = n / m;
    int n1 = m * q;
    int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));
    if (abs(n - n1) < abs(n - n2))
        return n1;
    return n2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<pair<int, int>> vc;
        int x;
        int y = 0;
        int even = 0;
        bool flag = false;
        while (a--)
        {
            cin >> x;
            if (x == b)
            {
                flag = true;
            }
            if (x % 2 == 0)
            {
                even++;
            }

            y = findClosest(x, b);
            if (y < x)
                y = (y + b) - x;
            else
            {
                y = y - x;
            }
            vc.push_back({y, x});
        }

        sort(vc.begin(), vc.end());
        if (b == 4 && !flag)
        {
            if (even == 0)
                cout << min(vc[0].first, 2) << endl;
            else if (even == 1)
                cout << min(vc[0].first, 1) << endl;
            else
                cout << min(vc[0].first, 0) << endl;
        }
        else if (flag)
            cout << 0 << endl;
        else
        {
            cout << vc[0].first << endl;
        }
    }
}