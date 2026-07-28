/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2200B - Deletion Sort
 * Link: https://codeforces.com/contest/2200/problem/B
 * Submission ID: 374231531 (https://codeforces.com/contest/2200/submission/374231531)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: bitmasks, brute force, greedy, sortings
 * Submitted At: 2026-05-11 20:44:49 UTC
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

    bool sorted = true;
    for (int i=0;i<n-1;i++)
    {
        if (a[i]>a[i+1]) 
        {
            sorted = false;
            break;
        }
    }
    if (sorted)
        cout << n << endl;
    else
        cout << 1 << endl;

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
//-1