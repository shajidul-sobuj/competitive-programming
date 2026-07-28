/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 467A - George and Accommodation
 * Link: https://codeforces.com/contest/467/problem/A
 * Submission ID: 377845397 (https://codeforces.com/contest/467/submission/377845397)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: 2026-06-09 03:21:16 UTC
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'

void boom()
{
    int n; cin >> n;
    int count = 0;
    for (int i=0;i<n;i++)
    {
        int x; cin >> x; 
        int y; cin >> y;
        if (y-x >= 2) count++;
    }
    cout << count << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t=1;
    // cin >> t;
    while(t--)
        boom();
    return 0;
}