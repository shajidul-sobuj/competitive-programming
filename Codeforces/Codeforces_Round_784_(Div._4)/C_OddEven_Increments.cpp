/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1669C - Odd/Even Increments
 * Link: https://codeforces.com/contest/1669/problem/C
 * Submission ID: 371689910 (https://codeforces.com/contest/1669/submission/371689910)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: greedy, implementation, math
 * Submitted At: 2026-04-18 18:37:31 UTC
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
    vector<pair<int, bool>> p;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        p.pb({x, (x%2)});
    }
    // bool pre0 = p[0].second;
    // bool pre1 = p[1].second;

    // cout << pre0 << " " << pre1 << endl;
    // for (int i=0,j=1;i<n;i=i+1,j=j+1)
    // {
    //     if (pre0 != p[i].second || pre1 != p[j].second)
    //     {
    //         cout << "No\n";
    //         return;
    //     }
    // }
    // cout << "Yes\n";

    // for (auto [x,y] :p)
    // {
    //     cout << x << " -> " << y << endl;
    // }
    // cout << endl;

    for (int i=0;i<n-2;i=i+1)
    {
        if (p[i].second != p[i+2].second)
        {
            cout << "NO\n";
            return;
        }
    }

    for (int i=1;i<n-2;i=i+1)
    {
        if (p[i].second != p[i+2].second)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    // else cout << "NO\n";
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