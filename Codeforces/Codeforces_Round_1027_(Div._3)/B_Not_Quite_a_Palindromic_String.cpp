/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2114B - Not Quite a Palindromic String
 * Link: https://codeforces.com/contest/2114/problem/B
 * Submission ID: 377475293 (https://codeforces.com/contest/2114/submission/377475293)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 900 | Tags: greedy, math
 * Submitted At: 2026-06-06 08:17:40 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void boom()
{
    int n; cin >> n;
    int k; cin >> k;
    string s; cin >> s;
    int c1 = 0, c0 = 0;
    for (int i=0;i<n;i++)
    {
        if (s[i] == '1') c1++;
        else c0++;
    }
    // int mx = max(c1,c0);
    // int mn = min(c1,c0);
    // int ans = (mx-mn)/2;
    // if (ans == k) cout << "YES\n";
    // else cout << "NO\n";
    while (k--) 
    {
        if (c1 > c0) c1 -= 2;
        else c0 -= 2;
    }
    if (c1==c0) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;
    while(t--)
    {
        boom();
    }
    return 0;
}