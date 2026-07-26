/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2237A - Destroying Towers
 * Link: https://codeforces.com/contest/2237/problem/A
 * Submission ID: 379656960 (https://codeforces.com/contest/2237/submission/379656960)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: games, greedy, schedules
 * Submitted At: 2026-06-21 05:00:13 UTC
 */

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  for (auto &x:a) cin >> x;
  int ans = 0;
  if (n == 1){
  	cout << a[0] << endl;
  	return;
  }
  if (n == 2)
  {
  	if (a[0]<a[1]) a[1] = a[0];
  	cout << a[0]+a[1] << endl;
  	return;
  }
  for (int i=0;i<n-1;i++)
  {
  	if (a[i]<a[i+1]){
  		a[i+1] = a[i];
  	}
  }
  for (auto x:a) ans+=x;
  	cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin>>t;
  while (t--) {
    solve();
  }
}