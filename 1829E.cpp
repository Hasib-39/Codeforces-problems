#include <bits/stdc++.h>
#define ll long long
using namespace std;
int d[1001][1001];
int a;
int b;
int c;
int pop(int x, int y)
{
    if (d[y][x] == 0)
        return 0;
    int sum = d[y][x];
    d[y][x] = 0;
    if (x > 1)
        sum += pop(x - 1, y);
    if (x < b)
        sum += pop(x + 1, y);
    if (y > 1)
        sum += pop(x, y - 1);
    if (y < a)
        sum += pop(x, y + 1);
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> a >> b;
        for (int i = 1; i <= a; i++)
            for (int j = 1; j <= b; j++)
                cin >> d[i][j];
        for (int i = 1; i <= a; i++)
            for (int j = 1; j <= b; j++)
                c = max(c, pop(j, i));
        cout << c << endl;
    }
}