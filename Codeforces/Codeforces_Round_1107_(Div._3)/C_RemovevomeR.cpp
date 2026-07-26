/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2241C - RemovevomeR
 * Link: https://codeforces.com/contest/2241/problem/C
 * Submission ID: 380764115 (https://codeforces.com/contest/2241/submission/380764115)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1000 | Tags: greedy
 * Submitted At: 2026-06-30 15:16:55 UTC
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
   
    if (s.front() != s.back() &&(is_sorted(all(s)) || is_sorted(s.rbegin(),s.rend()))) {
        cout << 2 << endl;
    }else cout << 1 << endl;

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