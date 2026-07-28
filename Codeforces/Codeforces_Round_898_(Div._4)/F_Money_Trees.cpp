/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1873F - Money Trees
 * Link: https://codeforces.com/contest/1873/problem/F
 * Submission ID: 375572642 (https://codeforces.com/contest/1873/submission/375572642)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 140 ms | Memory: 9600 KB
 * Verdict: OK
 * Rating: 1300 | Tags: binary search, greedy, math, two pointers
 * Submitted At: 2026-05-21 21:05:01 UTC
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
    ll n; cin >> n;
    ll k; cin >> k;
    vector<ll> a(n);
    vector<ll> h(n);
    for (auto &x:a) cin >> x;
    for (auto &x:h) cin >> x;
    ll l=0,r=0;
    ll sum = 0;
    set<ll> ans;
    while(r<n)
    {
        if (r<n-1 && (h[r]%h[r+1] == 0))
        {
            sum += a[r];
        }
        else if (r == n-1)
        {
            sum += a[r];
        }
        else
        {
            sum += a[r];
        }

        if (sum <= k)
        {
            ll len = r-l+1;
            ans.insert(len);
        }
        else 
        {
            while(sum > k)
            {
                sum -= a[l];
                l++;
            }
            if (sum <= k)
            {
                ll len = r-l+1;
                ans.insert(len);
            }
        }
        if (r < n-1 && h[r]%h[r+1] != 0) 
        {
            l = r+1;
            sum = 0;
        }
        r++;
    }
    if (ans.empty()) cout << 0 << endl;
    else cout << *ans.rbegin() << endl;

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