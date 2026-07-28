/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2231B - Another Sorting Problem
 * Link: https://codeforces.com/contest/2231/problem/B
 * Submission ID: 375539837 (https://codeforces.com/contest/2231/submission/375539837)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 93 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1100 | Tags: constructive algorithms
 * Submitted At: 2026-05-21 16:13:28 UTC
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
    vector<ll> a(n);
    for (auto &x:a) cin >> x;

    ll k = 0;
    for (int i=0;i<n-1;i++) 
    {
        if (a[i] > a[i+1]) k = max(k, abs(a[i]-a[i+1]));
    }
    if (k == 0) 
    {
        cout << "YES\n";
        return;
    }
    ll lst = INT_MIN;
    for (int i=0;i<n;i++) 
    {
        if (a[i] >= lst) lst = a[i];
        else if (a[i]+k >= lst) lst = a[i]+k;
        else 
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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