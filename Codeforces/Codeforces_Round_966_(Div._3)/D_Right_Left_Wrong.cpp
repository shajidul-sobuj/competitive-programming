/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2000D - Right Left Wrong
 * Link: https://codeforces.com/contest/2000/problem/D
 * Submission ID: 375578620 (https://codeforces.com/contest/2000/submission/375578620)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1200 | Tags: greedy, implementation, two pointers
 * Submitted At: 2026-05-21 22:51:53 UTC
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
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
 
    string s;
    cin >> s;
 
    ll ps[n+1] = {0};
    for (ll i = 1; i <= n; ++i)
    {
        ps[i] = ps[i - 1] + a[i - 1];
    }
 
    ll ans = 0;
    ll l = 0;
    ll r = n - 1;
 
    while (l < r)
    {
 
        while (l < n && s[l] != 'L')
        {
            l++;
        }
 
        while (r >= 0 && s[r] != 'R')
        {
            r--;
        }
 
        if (l < r)
        {
 
            ans += (ps[r + 1] - ps[l]);
            l++;
            r--;
        }
        else
        {
            break;
        }
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