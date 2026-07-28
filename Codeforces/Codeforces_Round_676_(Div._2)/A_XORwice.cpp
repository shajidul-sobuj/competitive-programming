/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1421A - XORwice
 * Link: https://codeforces.com/contest/1421/problem/A
 * Submission ID: 374027026 (https://codeforces.com/contest/1421/submission/374027026)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 93 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: bitmasks, greedy, math
 * Submitted At: 2026-05-09 15:59:00 UTC
 */

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void boom()
{
	ll a,b;
	cin >> a >> b;
	if (a==b)
	{
		cout << 0 << endl;
		return;
	}
	// if (a>b) swap(a,b);
	// ll ans = INT_MAX;
	// for (ll i=1;i<a;i++)
	// {
	// 	ll temp = (a^i)+(b^i);
	// 	if (temp<ans)
	// 	{
	// 		ans = temp;
	// 	}
	// }
	ll ans = a^b;
	cout << ans << endl;
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