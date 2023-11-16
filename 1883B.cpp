#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<char, int> map;
        int a, b;
        string s;
        cin >> a >> b;
        cin >> s;
        if (a == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        for (char c : s)
        {
            map[c]++;
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            char ch = static_cast<char>(i + 97);
            if (map[ch] % 2)
            {
                cnt++;
            }
        }

        if (cnt <= (b + 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}