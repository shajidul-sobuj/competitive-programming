/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1914D - Three Activities
 * Link: https://codeforces.com/contest/1914/problem/D
 * Submission ID: 371115507 (https://codeforces.com/contest/1914/submission/371115507)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 109 ms | Memory: 500 KB
 * Verdict: OK
 * Rating: 1200 | Tags: brute force, dp, greedy, implementation, sortings
 * Submitted At: 2026-04-14 10:52:04 UTC
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
    int n;
    cin >> n;
    vector<pair<int, int>> a,b,c;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        a.push_back({x,i});
    }
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        b.push_back({x,i});
    }
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        c.push_back({x,i});
    }

    sort(all(a), greater<pair<int, int>>());
    sort(all(b), greater<pair<int, int>>());
    sort(all(c), greater<pair<int, int>>());
    

    vector<pair<int, int>> ra,rb,rc;

    int ans = INT_MIN;
    for (int i=0;i<3;i++)
    {
        ra.push_back(a[i]);
    }
    
    for (int i=0;i<3;i++)
    {
        rb.push_back(b[i]);
    }
    
    for (int i=0;i<3;i++)
    {
        rc.push_back(c[i]);
    }

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            for (int k=0;k<3;k++)
            {
                if (ra[i].second != rb[j].second && ra[i].second != rc[k].second && rb[j].second != rc[k].second)
                    ans = max(ans, (ra[i].first + rb[j].first + rc[k].first));
            }
        }
    }
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