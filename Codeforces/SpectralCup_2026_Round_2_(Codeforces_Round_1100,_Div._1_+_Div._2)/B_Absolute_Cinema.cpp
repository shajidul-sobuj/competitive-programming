/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2229B - Absolute Cinema
 * Link: https://codeforces.com/contest/2229/problem/B
 * Submission ID: 376479111 (https://codeforces.com/contest/2229/submission/376479111)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, math
 * Submitted At: 2026-05-29 05:52:30 UTC
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
    vector<int>a(n),b(n);
    for (auto &x:a) cin >> x;
    for (auto &x:b) cin >> x;
    // sort(all(a)); sort(all(b));
    for (int i=0;i<n;i++)
    {
        if (a[i]>b[i]) swap(a[i],b[i]);
    }
    ll ans = 0;
    for (int i=0;i<n;i++)
    {
        ans += b[i];
    }
    sort(all(a));
    ans += a.back();
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