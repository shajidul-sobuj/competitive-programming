/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2236A - Games on the Train
 * Link: https://codeforces.com/contest/2236/problem/A
 * Submission ID: 378338656 (https://codeforces.com/contest/2236/submission/378338656)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, math
 * Submitted At: 2026-06-12 14:48:06 UTC
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
    int n; cin >> n;
    vector<int> a(n);
    int mx = INT_MIN; int mn = INT_MAX;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    cout << (mx-mn)+1 << endl;

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