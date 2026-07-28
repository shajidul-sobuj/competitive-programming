/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2195A - Sieve of Erato67henes
 * Link: https://codeforces.com/contest/2195/problem/A
 * Submission ID: 374922204 (https://codeforces.com/contest/2195/submission/374922204)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: math, number theory
 * Submitted At: 2026-05-17 08:24:01 UTC
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++) cin >> a[i];
    bool yes = false;

    for (int i=0;i<n;i++)
    {
         if(a[i]==67)
        { 
            yes = true;
            break;
        }
    }
    if (yes)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
// -1