/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2225A - A Number Between Two Others
 * Link: https://codeforces.com/contest/2225/problem/A
 * Submission ID: 372008312 (https://codeforces.com/contest/2225/submission/372008312)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, math
 * Submitted At: 2026-04-21 15:01:01 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

#define forr(i,a,b) for(int i=a;i<b;i++)
#define forb(i,a,b) for(int i=a;i>=b;i--)

const ll INF = 1e18;
const int MOD = 1e9 + 7;

void yes() { cout << "YES\n"; }
void no()  { cout << "NO\n";  }

void boom()
{
    ll x,y;
    cin >> x >> y;
    ll z = y/x;
    if (z == 2) cout << "NO\n";
    else cout << "YES\n";

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