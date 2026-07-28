/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2123C - Prefix Min and Suffix Max
 * Link: https://codeforces.com/contest/2123/problem/C
 * Submission ID: 373538596 (https://codeforces.com/contest/2123/submission/373538596)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1000 | Tags: brute force, data structures
 * Submitted At: 2026-05-04 18:38:13 UTC
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
    vector<int> a(n),pre(n),suf(n);
    for (auto &x:a) cin >> x;
    pre[0] = a[0];
    suf[n-1] = a[n-1];
    for (int i=1;i<n;i++)
    {
        pre[i] = min(pre[i-1],a[i]);
    }
    for (int i=n-2;i>=0;i--)
    {
        suf[i] = max(suf[i+1],a[i]);
    }
    string ans;
    for (int i=0;i<n;i++)
    {
        if (pre[i] == a[i] || suf[i] == a[i]) ans.pb('1');
        else ans.pb('0');
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