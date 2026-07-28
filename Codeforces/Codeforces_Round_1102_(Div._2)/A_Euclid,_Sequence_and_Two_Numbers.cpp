/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2234A - Euclid, Sequence and Two Numbers
 * Link: https://codeforces.com/contest/2234/problem/A
 * Submission ID: 377625536 (https://codeforces.com/contest/2234/submission/377625536)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: math, number theory, sortings
 * Submitted At: 2026-06-07 14:48:53 UTC
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
    vector<int> a(n);
    for (auto &x:a) cin >> x;
    sort(all(a), greater<int>());
    if (n == 2) 
    {
        cout << a[0] << " " << a[1] << endl;
        return;
    }
    // for (auto x:a) cout << x << " ";
    // cout << endl;
    for (int i=0;i<n-2;i++)
    {
        if (a[i]%a[i+1] != a[i+2])
        {
            // cout << a[i] << " " << a[i+1] << " " << a[i+2] << endl;
            cout << -1 << endl;
            return;
        }
    }
    cout << a[0] << " " << a[1] << endl;

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