#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a, b;
        int flag = 1;
        int f = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
            {
                if (flag)
                {
                    a.push_back(1);
                    b.push_back(1);
                }
                else
                {
                    a.push_back(0);
                    b.push_back(2);
                }
            }

            else if (s[i] == '1')
            {
                if (!f)
                {
                    a.push_back(0);
                    b.push_back(1);
                }
                else
                {
                    a.push_back(1);
                    b.push_back(0);
                    f = 0;
                }
                flag = 0;
            }
            else
            {
                a.push_back(0);
                b.push_back(0);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;

        for (int i = 0; i < n; i++)
        {
            cout << b[i];
        }
        cout << endl;
    }

    return 0;
}