/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 122A - Lucky Division
 * Link: https://codeforces.com/contest/122/problem/A
 * Submission ID: 376215059 (https://codeforces.com/contest/122/submission/376215059)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 92 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1000 | Tags: brute force, number theory
 * Submitted At: 2026-05-26 17:13:38 UTC
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
    vector<int>div = {4,7,44,47,444,474,477,74,744,747,777};
    for (int i=0;i<div.size();i++)
    {
        if (n%div[i] == 0)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}