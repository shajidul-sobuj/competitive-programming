/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2231A - Construct an Array
 * Link: https://codeforces.com/contest/2231/problem/A
 * Submission ID: 375489060 (https://codeforces.com/contest/2231/submission/375489060)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms
 * Submitted At: 2026-05-21 14:51:37 UTC
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

    for (int i=1;i<=n;i++) cout << (i*2)-1 << " ";
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