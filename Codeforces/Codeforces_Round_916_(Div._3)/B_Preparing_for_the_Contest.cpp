/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1914B - Preparing for the Contest
 * Link: https://codeforces.com/contest/1914/problem/B
 * Submission ID: 378948622 (https://codeforces.com/contest/1914/submission/378948622)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms, math
 * Submitted At: 2026-06-15 07:49:51 UTC
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void boom()
{
    int n; cin >> n;
    int k; cin >> k;
    for (int i=1;i<=k;i++) cout << i << " ";
    for (int i=n;i>k;i--) cout << i << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;
    while(t--) boom();
    return 0;
}

