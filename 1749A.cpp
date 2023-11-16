#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a, b;
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
        }
        if (n == m)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}