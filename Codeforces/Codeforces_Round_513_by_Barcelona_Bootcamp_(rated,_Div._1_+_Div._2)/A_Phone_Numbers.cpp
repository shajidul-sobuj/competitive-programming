/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1060A - Phone Numbers
 * Link: https://codeforces.com/contest/1060/problem/A
 * Submission ID: 379166249 (https://codeforces.com/contest/1060/submission/379166249)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force
 * Submitted At: 2026-06-16 17:59:40 UTC
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
    string s; cin >> s;
    int count = 0;
    for (int i=0;i<n;i++) if (s[i] == '8') count++;
    cout << min(count, n/11) << endl;

    return 0;
}