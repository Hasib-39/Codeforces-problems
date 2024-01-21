#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> arr(n + 1);
        int a;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        for (int i = 2; i <= n; i++)
        {
            arr[i] += arr[i - 1];
        }

        int sum = -1e9;
        for (int i = n; i >= 0; i--)
        {
            int idx = n - i;
            if (idx > k)
                break;
            int p = min(i, x);
            sum = max(sum, arr[i - p] - (arr[i] - arr[i - p]));
        }

        cout << sum << endl;
    }
}