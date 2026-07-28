/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2228B - Remilia Plays Soku
 * Link: https://codeforces.com/contest/2228/problem/B
 * Submission ID: 374796853 (https://codeforces.com/contest/2228/submission/374796853)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1100 | Tags: games, implementation
 * Submitted At: 2026-05-16 15:27:21 UTC
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
    ll n,x1,x2,k;
    cin >> n >> x1 >> x2 >> k;

    ll diff = abs(x1-x2);
    ll mn = min(diff, (n-diff));

    if (n <= 3) cout << 1 << endl;
    else cout << mn+k << endl;
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