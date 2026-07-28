/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2117B - Shrink
 * Link: https://codeforces.com/contest/2117/problem/B
 * Submission ID: 377842998 (https://codeforces.com/contest/2117/submission/377842998)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms
 * Submitted At: 2026-06-09 02:16:33 UTC
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'

void boom()
{
    int n; cin >> n;
    cout << 1;
    for (int i=3;i<=n;i++)
    {
        cout << " " << i;
    } 
    cout << " " << 2 << endl;
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