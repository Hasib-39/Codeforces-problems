#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << int(sqrtl(n - 1)) << endl;
    }

    return 0;
}