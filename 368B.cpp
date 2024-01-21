#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    set<ll> s;
    for (int i = n; i > 0; i--)
    {
        s.insert(arr[i]);
        arr[i] = s.size();
    }

    int p;
    for (int i = 1; i <= m; i++)
    {
        cin >> p;
        cout << arr[p] << endl;
    }
}