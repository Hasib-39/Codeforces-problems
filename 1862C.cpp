#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n + 1), rotate(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        if (arr[1] != n)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            rotate[arr[i]]++;
        }

        for (int i = n - 1; i >= 1; i--)
        {
            rotate[i] += rotate[i + 1];
        }

        if (rotate == arr)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}