/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2117C - Cool Partition
 * Link: https://codeforces.com/contest/2117/problem/C
 * Submission ID: 370227529 (https://codeforces.com/contest/2117/submission/370227529)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 187 ms | Memory: 10700 KB
 * Verdict: OK
 * Rating: 1200 | Tags: data structures, greedy
 * Submitted At: 2026-04-08 05:46:36 UTC
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
    vector<int> a(n);
    for (int i=0;i<n;i++) cin >> a[i];

    set<int> pre, next;
    pre.insert(a[0]);
    int count=1;
    for (int i=1;i<n;i++)
    {
        if (pre.count(a[i]))
        {
            pre.erase(a[i]);
        }
        
        next.insert(a[i]);
        if (pre.empty())
        {
            count++;
            pre = next;
            next.clear();
        }
    }
    cout << count << endl;

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