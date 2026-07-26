/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1285B - Just Eat It!
 * Link: https://codeforces.com/contest/1285/problem/B
 * Submission ID: 381059374 (https://codeforces.com/contest/1285/submission/381059374)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1300 | Tags: dp, greedy, implementation
 * Submitted At: 2026-07-02 17:59:24 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main(){
  ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
  
  int t; cin >> t;
  while(t--)
  {
    ll n; cin >> n;
    vector<ll> a;
    ll sum_Y = 0;
    ll sum = 0;
    for (int i=0;i<n;i++) 
    {
        int x;
        cin >> x;
        a.push_back(x);
        sum_Y += x;
    }
    ll ans = -100000;
    for (int i=0;i<n-1;i++)
    {
        sum += a[i];
        ans = max(ans, sum);
        if (sum < 0) sum = 0;
    }
    sum = 0;
    ll ans2 = -100000;
    for (int i=1;i<n;i++)
    {
        sum += a[i];
        ans2 = max(sum, ans2);
        if (sum<0) sum = 0;
    }
    ll ansf = max(ans, ans2);
    if (ansf>=sum_Y) cout << "NO\n";
    else cout << "YES\n";
  }

}