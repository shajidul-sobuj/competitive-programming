/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2197B - Array and Permutation
 * Link: https://codeforces.com/contest/2197/problem/B
 * Submission ID: 372744555 (https://codeforces.com/contest/2197/submission/372744555)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 125 ms | Memory: 7200 KB
 * Verdict: OK
 * Rating: 1100 | Tags: implementation, schedules, sortings, two pointers
 * Submitted At: 2026-04-27 18:09:23 UTC
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
    unordered_map<int, int> mp;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        mp[x] = i;
    }
    for (auto &x:a) cin >> x;
    for (int i=1;i<n;i++)
    {
        if (mp[a[i-1]] > mp[a[i]])
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