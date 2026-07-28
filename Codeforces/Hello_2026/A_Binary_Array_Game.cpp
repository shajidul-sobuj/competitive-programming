/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2183A - Binary Array Game
 * Link: https://codeforces.com/contest/2183/problem/A
 * Submission ID: 376064531 (https://codeforces.com/contest/2183/submission/376064531)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: games
 * Submitted At: 2026-05-25 16:12:30 UTC
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) {
            cin >> a[i];
        }
        (a[0]==0 && a[n-1]==0) ? cout << "Bob\n" : cout << "Alice\n";
    }
    return 0;
}