/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 451A - Game With Sticks
 * Link: https://codeforces.com/contest/451/problem/A
 * Submission ID: 371556144 (https://codeforces.com/contest/451/submission/371556144)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 900 | Tags: implementation
 * Submitted At: 2026-04-17 18:50:15 UTC
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
    int n,m;
    cin >> n >> m;
    ll ans = min(n,m); 
    if (ans%2 == 0) cout << "Malvika\n";
    else cout << "Akshat\n";

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