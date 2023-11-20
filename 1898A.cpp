#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int b = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                b++;
            }
        }
        int take = 0;
        char val;
        if (b == k)
            cout << 0 << endl;
        else
        {
            if (b > k)
            {
                while (b != k)
                {
                    take++;
                    if (s[take - 1] == 'B')
                        b--;
                }

                cout << 1 << endl
                     << take << " A" << endl;
            }
            else
            {
                while (b != k)
                {
                    take++;
                    if (s[take - 1] == 'A')
                        b++;
                }

                cout << 1 << endl
                     << take << " B" << endl;
            }
        }
    }
}