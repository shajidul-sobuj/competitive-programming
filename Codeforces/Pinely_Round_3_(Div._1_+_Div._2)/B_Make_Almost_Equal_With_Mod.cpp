/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1909B - Make Almost Equal With Mod
 * Link: https://codeforces.com/contest/1909/problem/B
 * Submission ID: 371121897 (https://codeforces.com/contest/1909/submission/371121897)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 78 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1200 | Tags: bitmasks, constructive algorithms, math, number theory
 * Submitted At: 2026-04-14 12:57:02 UTC
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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i=0;i<n;i++) cin >> a[i];
    ll mo = 2;
    while(1)
    {
        set<ll>st;
        for (int i=0;i<n;i++)
        {
            st.insert(a[i]%mo);
        }
        if (st.size() == 2)
        {
            cout << mo << endl;
            return;
        }
        mo*=2;
    }
    

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