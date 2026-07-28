/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2227C - Snowfall
 * Link: https://codeforces.com/contest/2227/problem/C
 * Submission ID: 373108740 (https://codeforces.com/contest/2227/submission/373108740)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 78 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms, math
 * Submitted At: 2026-04-30 15:06:06 UTC
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
    for (int i=0;i<n;i++) cin >> a[i];
    vector<int> b, t2, t3, non;
    for (int x : a)
    {
        bool d2 = (x%2 == 0);
        bool d3 = (x%3 == 0);
        if (d2 && d3) b.push_back(x);
        else if (d2) t2.push_back(x);
        else if (d3) t3.push_back(x);
        else non.push_back(x);
    }
    for (int x : b) cout << x << " ";
    for (int x : t2) cout << x << " ";
    for (int x : non) cout << x << " ";
    for (int x : t3) cout << x << " ";
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