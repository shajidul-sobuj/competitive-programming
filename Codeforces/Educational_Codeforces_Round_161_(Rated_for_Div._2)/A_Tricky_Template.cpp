/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1922A - Tricky Template
 * Link: https://codeforces.com/contest/1922/problem/A
 * Submission ID: 378918799 (https://codeforces.com/contest/1922/submission/378918799)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms, implementation, strings
 * Submitted At: 2026-06-15 05:12:51 UTC
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void boom()
{
    int n; cin >> n;
    string a,b,c;
    cin >> a >> b >> c;
    for (int i=0;i<n;i++)
    {
        if ((a[i]!=c[i] && b[i]!=c[i]))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;
    while(t--) boom();
    return 0;
}