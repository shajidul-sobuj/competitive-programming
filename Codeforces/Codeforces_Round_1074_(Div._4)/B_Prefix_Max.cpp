/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2185B - Prefix Max
 * Link: https://codeforces.com/contest/2185/problem/B
 * Submission ID: 372210336 (https://codeforces.com/contest/2185/submission/372210336)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: greedy
 * Submitted At: 2026-04-23 07:35:54 UTC
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
        vector <int> v(n);
        for (int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end(),greater<int>());
        long long ans = v[0]*n;
        cout << ans << endl;

    }
    return 0;
}