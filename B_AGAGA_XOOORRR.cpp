#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            ans ^= arr[i];
        }
        if (!ans)
            puts("YES");
        else
        {
            int sum = 0, count = 0;
            for (int i = 1; i < n; i++)
            {
                sum ^= arr[i];
                if (ans == sum)
                {
                    count++;
                    sum = 0;
                }
            }
            if (count >= 2)
                puts("YES");
            else
                puts("NO");
        }
    }
}