/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2229A - Slimes on a Line
 * Link: https://codeforces.com/contest/2229/problem/A
 * Submission ID: 375856192 (https://codeforces.com/contest/2229/submission/375856192)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force, greedy, math
 * Submitted At: 2026-05-23 18:42:51 UTC
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
    vector<int>a(n);
    for (auto &x:a) cin >> x;
    sort(all(a));
    cout << ceil(abs(a.front()-a.back())/2.0) << endl;
    

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