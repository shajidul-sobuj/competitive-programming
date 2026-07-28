/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1807D - Odd Queries
 * Link: https://codeforces.com/contest/1807/problem/D
 * Submission ID: 373397267 (https://codeforces.com/contest/1807/submission/373397267)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 187 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 900 | Tags: data structures, implementation
 * Submitted At: 2026-05-03 08:11:46 UTC
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void boom()
{
    ll n; cin >> n;
    ll q; cin >> q;
    vector<ll> a(n+1);
    for (ll i=1;i<=n;i++) cin >> a[i];
    vector<ll> pre(n+1);
    pre[1] = a[1];
    for (ll i=2;i<=n;i++)
    {
        pre[i] = pre[i-1]+a[i];
    }
    // for (auto x:pre)
    // {
    //     cout << x << " ";
    // }

    while(q--)
    {
        ll x,y,z;
        cin >> x >> y >> z;
        // x--, y--;
        // ll dif = pre[y];
        // if (x) dif -= pre[x-1];
        // ll ans = pre.back()-dif;
        // ans = ans+((y-x+1)*z);
        ll ans = (pre.back()-(pre[y]-pre[x-1]))+(z*(y-x+1));
        if (ans%2==1)cout << "YES" << endl;
        else cout << "NO\n";
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        boom();
    }
    return 0;
}