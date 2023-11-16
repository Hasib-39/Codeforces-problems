#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int a = s[0] - '0';
        int b = s[1] - '0';
        int c = s[2] - '0';
        int d = s[3] - '0';
        if (s[0] == '0')
            a = 10;
        if (s[1] == '0')
            b = 10;
        if (s[2] == '0')
            c = 10;
        if (s[3] == '0')
            d = 10;

        int cnt = abs(a - 1) + abs(b - a) + abs(c - b) + abs(d - c);
        cnt += 4;
        cout << cnt << endl;
    }
}