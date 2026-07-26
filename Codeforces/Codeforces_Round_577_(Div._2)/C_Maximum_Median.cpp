/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1201C - Maximum Median
 * Link: https://codeforces.com/contest/1201/problem/C
 * Submission ID: 383630642 (https://codeforces.com/contest/1201/submission/383630642)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 93 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1400 | Tags: binary search, greedy, math, sortings
 * Submitted At: 2026-07-20 21:08:21 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
const int N = 1e5+10;

void boom()
{
    ll n; cin >> n;
    ll k; cin >> k;
    vector<ll> a(n);
    for (auto &x:a) cin >> x;
    sort(all(a));

    auto ok = [&](ll md){

        int count = 0;
        for (ll i=n/2;i<n;i++){
            if(md>a[i])
                count += (md-a[i]);

            // cout << md << " " << count << endl;
            if(count>k) return false;
        }
        return true;
    };


    ll l=a[n/2],r=2e9,ans;
    while(l<=r){
        ll mid = (l+r)/2;
        if(ok(mid)){
            ans = mid;
            l = mid+1;
        }else {
            r = mid-1;
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