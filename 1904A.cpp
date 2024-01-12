#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  ll a, b, xk, yk, xq, yq;
  cin >> a >> b >> xk >> yk >> xq >> yq;
  vector<ll> dx = {-a, -a, a, a, b, b, -b, -b};
  vector<ll> dy = {-b, b, b, -b, a, -a, a, -a};
  set<pair<ll, ll>> K;
  set<pair<ll, ll>> Q;
  for (int i = 0; i < 8; i++)
  {
    K.insert({xk + dx[i], yk + dy[i]});
  }
  for (int i = 0; i < 8; i++)
  {
    Q.insert({xq + dx[i], yq + dy[i]});
  }
  ll ans = 0;
  for (auto i : K)
  {
    if (Q.find(i) != Q.end())
    {
      ans++;
    }
  }

  cout << ans << endl;
}
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}