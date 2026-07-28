/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 546A - Soldier and Bananas
 * Link: https://codeforces.com/contest/546/problem/A
 * Submission ID: 371545386 (https://codeforces.com/contest/546/submission/371545386)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: brute force, implementation, math
 * Submitted At: 2026-04-17 17:29:23 UTC
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
    int k,n,w;
    cin >> k >> n >> w;
    ll total_cost = k*((w*(w+1))/2);
    ll br = total_cost-n;
    if (br<=0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << br << endl;
    }
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