/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2230A - Optimal Purchase
 * Link: https://codeforces.com/contest/2230/problem/A
 * Submission ID: 375098287 (https://codeforces.com/contest/2230/submission/375098287)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: implementation, math
 * Submitted At: 2026-05-18 14:58:51 UTC
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
    ll n,a,b;
    cin >> n >> a >> b;
    // cout << min((n*a), min((((n/3)*b)+((n%3)*a)),(((n/3)*b)+((n%3)*b)))) << endl;
    if (n<=3) 
    {
        cout << min((n*a),b) << endl;
    }
    else 
    {
        cout << min((n*a),((n/3)*b)+min(((n%3)*a),b)) << endl;
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