/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1669B - Triple
 * Link: https://codeforces.com/contest/1669/problem/B
 * Submission ID: 371687574 (https://codeforces.com/contest/1669/submission/371687574)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 156 ms | Memory: 5900 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation, sortings
 * Submitted At: 2026-04-18 18:13:09 UTC
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
    map<int, int> mp;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int ans = -1;
    for (auto x:mp)
    {
        if (x.second >= 3) ans = x.first;
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