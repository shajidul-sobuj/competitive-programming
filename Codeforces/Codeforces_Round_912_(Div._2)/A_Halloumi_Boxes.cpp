/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1903A - Halloumi Boxes
 * Link: https://codeforces.com/contest/1903/problem/A
 * Submission ID: 372527938 (https://codeforces.com/contest/1903/submission/372527938)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force, greedy, sortings
 * Submitted At: 2026-04-25 17:14:12 UTC
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
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &x:a) cin >> x;
    if (k == 1)
    {
        bool tr = true;
        for (int i=1;i<n;i++)
        {
            if (a[i]<a[i-1])
            {
                tr = false;
                break;
            }
        }
        if (tr) cout << "YES\n";
        else cout << "NO\n";
    }
    else if (k>=2) cout << "YES\n";

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