/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2185C - Shifted MEX
 * Link: https://codeforces.com/contest/2185/problem/C
 * Submission ID: 373370790 (https://codeforces.com/contest/2185/submission/373370790)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 900 | Tags: implementation, sortings
 * Submitted At: 2026-05-02 21:35:40 UTC
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
    sort(all(a));
    int ans = 0, count = 1;
    for (int i=1;i<n;i++)
    {
        if (a[i] == a[i-1]+1)
        {
            count++;
        }else if (a[i] == a[i-1]) continue;
        else 
        {
            ans = max(ans, count);
            count = 1;
        }
    }
    ans = max(ans, count);
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