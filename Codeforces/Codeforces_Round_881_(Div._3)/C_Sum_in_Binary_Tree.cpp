/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1843C - Sum in Binary Tree
 * Link: https://codeforces.com/contest/1843/problem/C
 * Submission ID: 374688973 (https://codeforces.com/contest/1843/submission/374688973)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: bitmasks, combinatorics, math, trees
 * Submitted At: 2026-05-16 06:32:30 UTC
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'

void boom()
{
    ll x; cin >> x;
    ll ans = 0;
    while(x)
    {
        ans += x;
        x=x>>1;
    }
    cout << ans << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t=1;
    cin >> t;
    while(t--)
        boom();
    return 0;
}