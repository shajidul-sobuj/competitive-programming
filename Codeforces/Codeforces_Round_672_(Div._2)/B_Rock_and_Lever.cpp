/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1420B - Rock and Lever
 * Link: https://codeforces.com/contest/1420/problem/B
 * Submission ID: 373387392 (https://codeforces.com/contest/1420/submission/373387392)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 203 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1200 | Tags: bitmasks, math
 * Submitted At: 2026-05-03 05:45:57 UTC
 */

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void boom()
{
	ll n; cin >> n;
    vector<ll> a(n);
    for (ll i=0;i<n;i++)
    {
    	cin >> a[i];
    } 
    // sort(a.rbegin(),a.rend());
    if (n == 1) 
    {
    	cout << 0 << endl;
    	return;
    }
    map<ll, ll> mp;

    ll count=0;
    for (ll i=0;i<n;i++)
    {
    	mp[__lg(a[i])]++;
	}
	for (auto [x,y]:mp)
	{
		if (y>1) count += ((y*(y-1))/2);
	}
	cout << count << endl;
}

int main()
{
	int t=1;
	cin >> t;
	while(t--)
	{
		boom();
	}
}