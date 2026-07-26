/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2241A - Divide and Conquer
 * Link: https://codeforces.com/contest/2241/problem/A
 * Submission ID: 380721401 (https://codeforces.com/contest/2241/submission/380721401)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, math, number theory
 * Submitted At: 2026-06-30 14:42:03 UTC
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
    int x,y; cin >> x >> y;
    if (x%y == 0) cout << "YES\n";
    else cout << "NO\n";

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