/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2236B - Tatar TV Show
 * Link: https://codeforces.com/contest/2236/problem/B
 * Submission ID: 378357449 (https://codeforces.com/contest/2236/submission/378357449)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, math, strings
 * Submitted At: 2026-06-12 15:03:23 UTC
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
    int k; cin >> k;
    string s; cin >> s;
    for (int i=0;i<n-k;i++)
    {
        if (s[i] == '1')
        {
            s[i] = '0'; 
            if (s[i+k] == '0') s[i+k] = '1';
            else s[i+k] = '0';
        }

        // cout << s << endl;
    }
    for (int i=0;i<n;i++)
    {
        if (s[i] == '1')
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

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