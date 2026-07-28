/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1547C - Pair Programming
 * Link: https://codeforces.com/contest/1547/problem/C
 * Submission ID: 371178134 (https://codeforces.com/contest/1547/submission/371178134)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1100 | Tags: greedy, two pointers
 * Submitted At: 2026-04-14 19:29:52 UTC
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
    int k,n,m;
    cin >> k >> n >> m;
    vector<int> a(n),b(m);
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<m;i++) cin >> b[i];

    vector<int>ans;
    int i=0,j=0;
    while(i<n || j<m)
    {
        if (i<n && a[i] == 0)
        {
            k++;
            ans.push_back(0);
            i++;
        }
        else if (j<m && b[j] == 0)
        {
            k++;
            ans.push_back(0);
            j++;
        }
        else if (i<n && a[i]<=k)
        {
            ans.push_back(a[i]);
            i++;
        }
        else if (j<m && b[j]<=k)
        {
            ans.push_back(b[j]);
            j++;
        }
        else 
        {
            cout << -1 << endl;
            return;
        }
    }
    for (auto x: ans)
    {
        cout << x << " ";
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