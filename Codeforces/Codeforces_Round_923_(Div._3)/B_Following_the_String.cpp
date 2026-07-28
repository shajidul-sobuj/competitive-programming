/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1927B - Following the String
 * Link: https://codeforces.com/contest/1927/problem/B
 * Submission ID: 378761029 (https://codeforces.com/contest/1927/submission/378761029)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: N/A
 * Verdict: OK
 * Rating: 900 | Tags: constructive algorithms, greedy, strings
 * Submitted At: 2026-06-14 15:48:31 UTC
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
    vector<char> p(n, 'a');
    for (int i=0;i<n;i++)
    {
        int idx = a[i];
        cout << p[idx];
        p[idx]++;
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