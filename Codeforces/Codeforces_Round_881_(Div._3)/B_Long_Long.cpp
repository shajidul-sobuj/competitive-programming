/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1843B - Long Long
 * Link: https://codeforces.com/contest/1843/problem/B
 * Submission ID: 371159419 (https://codeforces.com/contest/1843/submission/371159419)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 500 KB
 * Verdict: OK
 * Rating: 800 | Tags: greedy, math, two pointers
 * Submitted At: 2026-04-14 16:33:10 UTC
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
    vector<ll> a;
    for (ll i=0;i<n;i++) 
    {
        ll x;
        cin >> x;
        if (x !=0) a.push_back(x);
    }
    if (a.empty())
    {
        cout << 0 << " " << 0 << endl;
        return;
    }

    bool pos;
    ll count=0;
    ll sum = 0;
    if (a[0] < 0)
    {
        a[0] *= -1;
        sum += a[0];
        pos = false;
    }
    else
    {
        sum += a[0];
        pos = true;
    }
    for (ll i=1;i<sz(a);i++)
    {
        if (a[i] < 0) 
        {
            if (pos){
                pos = false;
            }
            a[i] *= -1;
        }
        else if (a[i] >0)
        {
            if (!pos) count++;
            pos = true;
        }
        sum += a[i];
    }
    if (!pos)
    {
        count++;
    }

    cout << sum << " " << count << endl;

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