/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 344A - Magnets
 * Link: https://codeforces.com/contest/344/problem/A
 * Submission ID: 381245434 (https://codeforces.com/contest/344/submission/381245434)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 124 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: 2026-07-04 14:15:29 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
const int N = 1e5+10;

void boom()
{
    int n; cin >> n;
    int ans = 1;
    string s; cin >> s;
    for (int i=0;i<n-1;i++)
    {
        string x; cin >> x;
        if (s != x) {
            ans++;
            s = x;
        }
    }
    cout << ans << endl;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        boom();
    }

    return 0;
}