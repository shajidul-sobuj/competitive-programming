/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2217A - The Equalizer
 * Link: https://codeforces.com/contest/2217/problem/A
 * Submission ID: 370122406 (https://codeforces.com/contest/2217/submission/370122406)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: math
 * Submitted At: 2026-04-07 14:41:12 UTC
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
    int n, k;
    cin >> n >> k;

    ll sum = 0;
    for (int i=0;i<n;i++) {
        int a;
        cin >> a;
        sum += a;
    }

    if ((sum%2 != 0) || ((ll)n*k%2 == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


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