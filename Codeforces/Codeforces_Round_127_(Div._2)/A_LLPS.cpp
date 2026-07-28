/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 202A - LLPS
 * Link: https://codeforces.com/contest/202/problem/A
 * Submission ID: 375943887 (https://codeforces.com/contest/202/submission/375943887)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 92 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: binary search, bitmasks, brute force, greedy, implementation, strings
 * Submitted At: 2026-05-24 14:01:58 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    map<char, int>mp;
    for (int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    for (int i=0;i<mp.rbegin()->second;i++)
    {
        cout << mp.rbegin()->first;
    }

    cout << endl;

    return 0;
}