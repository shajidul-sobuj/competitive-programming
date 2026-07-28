/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 479A - Expression
 * Link: https://codeforces.com/contest/479/problem/A
 * Submission ID: 372157924 (https://codeforces.com/contest/479/submission/372157924)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1000 | Tags: brute force, math
 * Submitted At: 2026-04-22 16:20:47 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b,c;
    cin >> a >> b >> c;
    ll ans = max({(a+b+c),(a*b*c),((a+b)*c),(a*(b+c)),(a+b*c),(a*b+c)});
    cout << ans << endl;

    return 0;
}