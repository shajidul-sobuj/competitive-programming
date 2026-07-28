/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2218D - The 67th OEIS Problem
 * Link: https://codeforces.com/contest/2218/problem/D
 * Submission ID: 372722492 (https://codeforces.com/contest/2218/submission/372722492)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1100 | Tags: constructive algorithms, greedy, math, number theory
 * Submitted At: 2026-04-27 14:37:37 UTC
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

vector<ll> a;

bool pp(ll n)
{
    if (n < 2) return false;
    if (n == 2) return true;
    if (n%2 == 0) return false;
    for (ll i=3;i*i<=n;i+=2)
    {
        if (n%i == 0) return false;
    }
    return true;
}

void builder(ll n)
{
    for (ll i=2;sz(a)<100090;i++)
    {
        if (pp(i))
        {
            a.pb(i);
        }
        if (a.size() == n+5) break;
    }
}

void boom()
{
    ll n;
    cin >> n;
    a.clear();
    builder(n);
    for (ll i=0;i<n;i++)
    {
        cout << a[i]*a[i+1] << " ";
    }
    // for (auto x:a)
    // {
    //     cout << x << " ";
    // }
    cout << endl;
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