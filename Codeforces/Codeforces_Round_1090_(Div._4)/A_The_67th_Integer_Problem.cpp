/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2218A - The 67th Integer Problem
 * Link: https://codeforces.com/contest/2218/problem/A
 * Submission ID: 369620769 (https://codeforces.com/contest/2218/submission/369620769)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: brute force, games, implementation, math
 * Submitted At: 2026-04-04 14:40:47 UTC
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
    if (n == 67) cout << 67 << endl;
    else

        cout << n+1 << endl;

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