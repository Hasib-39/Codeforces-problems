#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        vector<int> odd, even;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
            if (x % 2)
            {
                odd.push_back(x);
            }
            else
            {
                even.push_back(x);
            }
        }

        int o = odd.size();
        int e = even.size();

        if (e % 2 != o % 2)
        {
            cout << "NO" << endl;
        }
        else if (e % 2 && o % 2)
        {
            int flag = 0;
            for (int i = 0; i < o; i++)
            {
                for (int j = 0; j < e; j++)
                {
                    if (abs(odd[i] - even[j]) == 1)
                    {
                        flag = 1;
                        break;
                    }
                }
            }

            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        else if (e % 2 == 0 && o % 2 == 0)
        {
            cout << "YES" << endl;
        }
    }
}