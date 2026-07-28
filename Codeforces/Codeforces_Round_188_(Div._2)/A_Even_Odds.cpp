/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 318A - Even Odds
 * Link: https://codeforces.com/contest/318/problem/A
 * Submission ID: 372380959 (https://codeforces.com/contest/318/submission/372380959)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 92 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 900 | Tags: math
 * Submitted At: 2026-04-24 17:47:34 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    ll odd = (n+1)/2;

    if (k <= odd)
    {
        cout << (2*k-1) << endl;
    }
    else
    {
        cout << (2*(k-odd)) << endl;
    }

    return 0;
}