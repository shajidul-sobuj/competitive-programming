/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2241D - An Alternative Way
 * Link: https://codeforces.com/contest/2241/problem/D
 * Submission ID: 380793001 (https://codeforces.com/contest/2241/submission/380793001)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 109 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1100 | Tags: dp, greedy, math
 * Submitted At: 2026-06-30 15:46:43 UTC
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

    vector<int> a(n),b(n);
    for (auto &x:a) cin >> x;
    for (auto &x:b) cin >> x;

    ll sum = 0;
    for (int i=0;i<n;i++){
        sum += (b[i]-a[i]);
        if (sum < 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        boom();
    }

    return 0;
}