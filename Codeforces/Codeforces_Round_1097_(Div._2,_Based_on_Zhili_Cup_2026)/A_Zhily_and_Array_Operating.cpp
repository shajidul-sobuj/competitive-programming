/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2224A - Zhily and Array Operating
 * Link: https://codeforces.com/contest/2224/problem/A
 * Submission ID: 373669546 (https://codeforces.com/contest/2224/submission/373669546)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms, greedy
 * Submitted At: 2026-05-06 06:55:17 UTC
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
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    // ll cur = 0;
    int ans = 0;

    if (a[n-1] > 0) {
        ans++;
    }
    for (int i=n-2;i>=0;i--)
    {
        ll cur = (a[i]+a[i+1]);

        a[i] = max(cur, a[i]);
        
        if (a[i]>0) ans++;
    }

    cout << ans << endl;
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