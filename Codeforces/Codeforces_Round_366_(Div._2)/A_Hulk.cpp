/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 705A - Hulk
 * Link: https://codeforces.com/contest/705/problem/A
 * Submission ID: 377845658 (https://codeforces.com/contest/705/submission/377845658)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: 2026-06-09 03:27:07 UTC
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'

void boom()
{
    int n; cin >> n;
    if (n == 1) 
    {
        cout << "I hate it\n";
        return;
    }
    for (int i=1;i<n;i++)
    {
        if (i%2 == 1) cout << "I hate that ";
        else cout << "I love that ";
    }
    if (n%2 == 1) cout << "I hate it\n";
    else cout << "I love it\n";
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