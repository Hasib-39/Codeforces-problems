#include <bits/stdc++.h>
using namespace std;
#define ll long long
string val(string a, string b, string c)
{
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        if (b[i] != c[i] && c[i] != a[i])
        {
            return "YES";
        }
    }
    return "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        cout << val(a, b, c) << endl;
    }
}