/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1006C - Three Parts of the Array
 * Link: https://codeforces.com/contest/1006/problem/C
 * Submission ID: 373536708 (https://codeforces.com/contest/1006/submission/373536708)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1200 | Tags: binary search, data structures, two pointers
 * Submitted At: 2026-05-04 18:14:13 UTC
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
    ll n;
    cin >> n;
    vector<ll>a(n);
    for (auto &x:a) cin >> x;
    ll i=-1,j=n;
    ll lsum=0,rsum=0,ans=0;
    while(i<j)
    {
        if (rsum<lsum)
        {
            rsum += a[--j];
            // j--;
        }
        else if (lsum<rsum)
        {
            lsum += a[++i];
            // i++;
        }
        else 
        {
            ans = lsum;
            // rsum += a[j];
            // j--;
            lsum += a[++i];
            // i++;
        }
    }
    cout << ans << endl;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        boom();
    }

    return 0;
}