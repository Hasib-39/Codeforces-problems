#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int z = 0;
    int o = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            o++;
        else
            z++;
    }

    int mn = min(z, o);
    cout << n - mn * 2;
}