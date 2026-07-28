/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2228A - Marisa Steals Reimu's Takeout
 * Link: https://codeforces.com/contest/2228/problem/A
 * Submission ID: 374759872 (https://codeforces.com/contest/2228/submission/374759872)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, implementation
 * Submitted At: 2026-05-16 14:51:29 UTC
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
    map<int, int>mp;
    for (auto x:a)
    {
        mp[x]++;
    }
    int ans = 0;
    ans+=mp[0];
    int one = mp[1];
    int two = mp[2];
    if (two<=one) 
    {
        ans += two;
        ans += (one-two)/3;
    }
    else 
    {
        ans += one;
        ans += (two-one)/3;
    }
    // cout << one << " " << two << " ";
    cout << ans << endl;

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