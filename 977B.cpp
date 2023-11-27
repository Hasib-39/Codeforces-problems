#include <bits/stdc++.h>
using namespace std;
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define ll long long
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = 0;
    string ans;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == s[i] && s[j + 1] == s[i + 1])
            {
                cnt++;
                if (res < cnt)
                {
                    res = cnt;
                    ans = string(1, s[i]) + string(1, s[i + 1]);
                }
            }
        }
    }

    cout << ans << endl;
}