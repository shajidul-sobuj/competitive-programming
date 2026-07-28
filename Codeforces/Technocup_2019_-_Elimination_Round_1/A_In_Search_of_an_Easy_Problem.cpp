/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1030A - In Search of an Easy Problem
 * Link: https://codeforces.com/contest/1030/problem/A
 * Submission ID: 376062603 (https://codeforces.com/contest/1030/submission/376062603)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: 2026-05-25 15:54:41 UTC
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
    while(n--)
    {
        int x; cin >> x;
        if (x) 
        {
            cout << "HARD\n";
            return 0;
        }
    }
    cout << "EASY\n";

    return 0;
}