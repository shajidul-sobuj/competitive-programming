/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2233A - AI Project Development
 * Link: https://codeforces.com/contest/2233/problem/A
 * Submission ID: 380356979 (https://codeforces.com/contest/2233/submission/380356979)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: brute force, math
 * Submitted At: 2026-06-27 16:01:46 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void boom()
{
    double n; cin >> n;
    double x; cin >> x;
    double y; cin >> y;
    double z; cin >> z;
    double withoutai = ceil(n/(x+y));
    // cout << withoutai << endl;
    double withai = z;
    withai += ceill((n-(z*x))/(x+(10*y)));
    double ans = min(withai,withoutai);
    if(ans == 0) cout << 1 << endl;
    else cout << ans << endl;
    // cout << withoutai << " " << withai << endl;

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