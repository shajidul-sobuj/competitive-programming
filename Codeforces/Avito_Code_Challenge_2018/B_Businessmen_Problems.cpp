/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 981B - Businessmen Problems
 * Link: https://codeforces.com/contest/981/problem/B
 * Submission ID: 381058138 (https://codeforces.com/contest/981/submission/381058138)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 203 ms | Memory: 12600 KB
 * Verdict: OK
 * Rating: 1000 | Tags: sortings
 * Submitted At: 2026-07-02 17:48:15 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main(){
  ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);


  ll n; cin >> n;
  vector<pair<ll, ll>> a(n);
  for (int i=0;i<n;i++)
  {
    cin >> a[i].first >> a[i].second;
  }
  ll m; cin >> m;
  vector<pair<ll, ll>> b(m);
  for (ll i=0;i<m;i++)
  {
    cin >> b[i].first >> b[i].second;
  }
  map<ll, ll> mp;
  for (auto [x,y]:a)
  {
    mp[x] = y;
  }
  for (auto [x,y]:b)
  {
    mp[x] = max(mp[x],y);
  }
  ll ans = 0;
  for (auto [x,y]:mp)
  {
    ans += y;
  }
  cout << ans << endl;
  
}