/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2244A - Iskander and Drawings
 * Link: https://codeforces.com/contest/2244/problem/A
 * Submission ID: 382578867 (https://codeforces.com/contest/2244/submission/382578867)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: N/A
 * Verdict: OK
 * Rating: Unrated | Tags: dp, games, greedy, strings
 * Submitted At: 2026-07-14 14:44:08 UTC
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
    string s; cin >> s;
    int cnt = 0;
    int ans = 0;
    for (int i=0;i<n;i++){
        if(s[i] == '*'){
            ans = max(cnt, ans);
            cnt = 0;
        }else cnt++;
    }
    ans = max(cnt, ans);
    ans++;
    cout << ans/2 << endl;
    // cout << ans;

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