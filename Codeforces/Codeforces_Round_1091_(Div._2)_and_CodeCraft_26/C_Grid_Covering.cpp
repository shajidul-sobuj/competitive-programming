/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2217C - Grid Covering
 * Link: https://codeforces.com/contest/2217/problem/C
 * Submission ID: 370142209 (https://codeforces.com/contest/2217/submission/370142209)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 78 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1300 | Tags: chinese remainder theorem, math, number theory
 * Submitted At: 2026-04-07 15:05:04 UTC
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
    ll n,m,a,b;
    cin >> n >> m >> a >> b;
    
    if (__gcd(n,a) == 1 && __gcd(m,b) == 1 && __gcd(n,m) <= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

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