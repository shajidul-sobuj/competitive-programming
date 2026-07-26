/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2244B - Nikita and Books
 * Link: https://codeforces.com/contest/2244/problem/B
 * Submission ID: 382615700 (https://codeforces.com/contest/2244/submission/382615700)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 78 ms | Memory: N/A
 * Verdict: OK
 * Rating: Unrated | Tags: greedy, math, sortings
 * Submitted At: 2026-07-14 15:10:37 UTC
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
    vector<ll> a(n);
    for (auto &x:a) cin >> x;
    ll pre = 1;
    ll carry = abs(1-a[0]);
    for (ll i=1;i<n;i++){
        if(carry <= 0 && pre >= a[i]){
            cout << "NO\n";
            return;
        }
        if(a[i]>pre){
            carry += abs(a[i]-(pre+1));
            a[i] = pre+1;
        }else{
            carry -= abs(pre+1)-a[i];
            a[i] = (pre+1);
        }
        pre = a[i];
        if(carry<0) {
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