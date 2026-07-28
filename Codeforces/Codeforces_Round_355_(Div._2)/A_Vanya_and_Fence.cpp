/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 677A - Vanya and Fence
 * Link: https://codeforces.com/contest/677/problem/A
 * Submission ID: 375190663 (https://codeforces.com/contest/677/submission/375190663)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: 2026-05-19 05:08:59 UTC
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'

void boom()
{
    int n; cin >> n;
    int k; cin >> k;
    int ans = 0;
    for (int i=0;i<n;i++)
    {
        int x; cin >> x;
        if (x<=k) ans++;
        else ans+=2;
    }
    cout << ans << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t=1;
    // cin >> t;
    while(t--)
        boom();
    return 0;
}