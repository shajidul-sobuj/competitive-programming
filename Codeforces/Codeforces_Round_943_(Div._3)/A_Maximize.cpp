/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1968A - Maximize?
 * Link: https://codeforces.com/contest/1968/problem/A
 * Submission ID: 372984992 (https://codeforces.com/contest/1968/submission/372984992)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force, math, number theory
 * Submitted At: 2026-04-29 18:48:31 UTC
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
    int n;
    cin >> n;

    ll mx=INT_MIN;
    int idx;
    for (int i=1;i<n;i++)
    {
        int g = __gcd(n,i);
        g += i;
        if (g>mx)
        {   
            mx = g;
            idx = i;
        }
    }
    cout << idx << endl;

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