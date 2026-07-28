/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1690D - Black and White Stripe
 * Link: https://codeforces.com/contest/1690/problem/D
 * Submission ID: 371145927 (https://codeforces.com/contest/1690/submission/371145927)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1000 | Tags: implementation, two pointers
 * Submitted At: 2026-04-14 14:50:38 UTC
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
    string s;
    cin >> s;
    ll l=0,r=0;
    ll ans = INT_MAX;
    ll count =0;
    while(r<n)
    {
        if (s[r] == 'W') count++;

        if (r-l+1 == k)
        {
            ans = min(ans, count);
            if (s[l] == 'W') count--;
            l++;
        }
        r++;
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
// 