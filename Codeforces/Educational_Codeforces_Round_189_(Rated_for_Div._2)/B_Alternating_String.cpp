/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2225B - Alternating String
 * Link: https://codeforces.com/contest/2225/problem/B
 * Submission ID: 372013310 (https://codeforces.com/contest/2225/submission/372013310)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 900 | Tags: brute force, greedy
 * Submitted At: 2026-04-21 15:08:28 UTC
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
    string s;
    cin >> s;
    int count =0;
    for (ll i=0;i<sz(s)-1;i++)
    {
        if (s[i] == s[i+1]) count++;
    }
    if (count <= 2) cout << "YES\n";
    else cout << "NO\n";

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