/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 41A - Translation
 * Link: https://codeforces.com/contest/41/problem/A
 * Submission ID: 374488761 (https://codeforces.com/contest/41/submission/374488761)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation, strings
 * Submitted At: 2026-05-14 10:27:05 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,t; cin >> s >> t;
    reverse(t.begin(),t.end());
    // cout << s << endl << t;
    if (s == t) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}