/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 116A - Tram
 * Link: https://codeforces.com/contest/116/problem/A
 * Submission ID: 374485738 (https://codeforces.com/contest/116/submission/374485738)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 92 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: 2026-05-14 09:58:37 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int trmp = 0;
    int ans = 0;
    while(n--)
    {
        int x,y; cin >> x >> y;
        trmp = (trmp-x+y);
        ans = max(ans, trmp);
    }
    cout << ans << endl;

    return 0;
}