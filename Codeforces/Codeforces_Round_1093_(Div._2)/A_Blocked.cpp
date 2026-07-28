/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2220A - Blocked
 * Link: https://codeforces.com/contest/2220/problem/A
 * Submission ID: 371007589 (https://codeforces.com/contest/2220/submission/371007589)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: greedy, sortings
 * Submitted At: 2026-04-13 15:46:25 UTC
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
    vector<int> a(n);
    set<int> s;
    
    forr(i,0,n)
    {
        cin >> a[i];
        s.insert(a[i]); 
    }

    if (sz(s) < n)
    {
        cout << -1 << endl;
        return;
    }

    sort(all(a), greater<int>());

    for(auto x:a)
    {
        cout << x << " ";
    }
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