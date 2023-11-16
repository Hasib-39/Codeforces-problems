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
        string arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        string vika = "vika";
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            bool found = false;
            for (int j = 0; j < n; j++)
            {
                if (arr[j][i] == vika[k])
                {
                    found = true;
                }
            }
            if (found)
            {
                cnt++;
                k++;
            }
        }

        if (cnt == 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}