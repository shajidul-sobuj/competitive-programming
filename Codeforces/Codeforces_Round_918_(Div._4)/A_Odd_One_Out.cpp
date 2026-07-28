/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1915A - Odd One Out
 * Link: https://codeforces.com/contest/1915/problem/A
 * Submission ID: 375020175 (https://codeforces.com/contest/1915/submission/375020175)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: bitmasks, implementation
 * Submitted At: 2026-05-18 05:36:49 UTC
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'

void boom()
{
    int a,b,c;
    cin >> a >> b >> c;
    map<int, int>mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    for (auto [x,y]:mp)
    {
        if (y == 1) 
        {
            cout << x << endl;
        }
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t=1;
    cin >> t;
    while(t--)
        boom();
    return 0;
}