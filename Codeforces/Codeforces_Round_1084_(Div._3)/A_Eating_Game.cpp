/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2200A - Eating Game
 * Link: https://codeforces.com/contest/2200/problem/A
 * Submission ID: 373756277 (https://codeforces.com/contest/2200/submission/373756277)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy
 * Submitted At: 2026-05-06 18:39:39 UTC
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector <int> a(n);
    int mx = INT_MIN;
    for (int i=0;i<n;i++){
        cin >> a[i];
        mx = max(mx,a[i]);
    }
    int max_count = 0;
    for (int i=0;i<n;i++){
        if (a[i] == mx) max_count++; 
    }
    cout << max_count << "\n";
}
       

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}