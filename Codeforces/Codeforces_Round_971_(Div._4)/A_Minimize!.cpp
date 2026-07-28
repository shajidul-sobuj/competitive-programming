/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2009A - Minimize!
 * Link: https://codeforces.com/contest/2009/problem/A
 * Submission ID: 371911443 (https://codeforces.com/contest/2009/submission/371911443)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force, math
 * Submitted At: 2026-04-20 18:58:27 UTC
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
    int a,b;
    cin >> a >> b;
    int mn = INT_MAX;
    for (int i=a;i<=b;i++)
    {
        int ans = (i-a)+(b-i);
        mn = min(mn,ans);
    }
    cout << mn << endl;

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