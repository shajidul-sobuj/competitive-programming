/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2230C - Arrange the Numbers in a Circle
 * Link: https://codeforces.com/contest/2230/problem/C
 * Submission ID: 375151286 (https://codeforces.com/contest/2230/submission/375151286)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1300 | Tags: constructive algorithms, implementation, math
 * Submitted At: 2026-05-18 16:51:26 UTC
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
    ll c1 = 0;
    ll k = 0;
    ll p = 0;
    ll sum = 0;
    
    for (int i=0;i<n;i++) {
        ll c; cin >> c;
        if (c == 1) c1++;
        else 
        {
            k++;
            sum += c;
            p += (c/2);
        }
    }
    
    ll slo = 0;
    if (k == 1) slo = p;
    else if (k >= 2) slo = p-k;
    
    ll ans = sum + min(c1, slo);
    if (ans<3) ans = 0;
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