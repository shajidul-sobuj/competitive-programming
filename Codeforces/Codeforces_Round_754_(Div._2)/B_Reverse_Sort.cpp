/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1605B - Reverse Sort
 * Link: https://codeforces.com/contest/1605/problem/B
 * Submission ID: 375691755 (https://codeforces.com/contest/1605/submission/375691755)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1000 | Tags: greedy, sortings
 * Submitted At: 2026-05-22 20:38:18 UTC
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
    string s; cin >> s;
    string t = s;
    sort(all(t));
    if (s == t)
    {
        cout << 0 << endl;
        return;
    }
    vector<int> a;
    for (int i=0;i<n;i++)
    {
        if (s[i] != t[i]) a.pb(i);
    }
    cout << 1 << endl;
    cout << a.size() << " ";
    for (auto x:a) cout << x+1 << " ";
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