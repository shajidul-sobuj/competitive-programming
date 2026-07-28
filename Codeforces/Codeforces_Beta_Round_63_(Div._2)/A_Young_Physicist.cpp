/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 69A - Young Physicist
 * Link: https://codeforces.com/contest/69/problem/A
 * Submission ID: 374641368 (https://codeforces.com/contest/69/submission/374641368)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 92 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1000 | Tags: implementation, math
 * Submitted At: 2026-05-15 17:18:53 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int>a(3);
    while(n--)
    {
        int x,y,z; cin >> x >> y >> z;
        a[0]+=x;
        a[1]+=y;
        a[2]+=z;
    }
    if (a[0] == 0 && a[1] == 0 && a[2] == 0) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}