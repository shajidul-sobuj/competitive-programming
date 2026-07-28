/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1097B - Petr and a Combination Lock
 * Link: https://codeforces.com/contest/1097/problem/B
 * Submission ID: 373400177 (https://codeforces.com/contest/1097/submission/373400177)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1200 | Tags: bitmasks, brute force, dp
 * Submitted At: 2026-05-03 08:50:35 UTC
 */

	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long 

	void solveTest(){
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    for (int i=0;i<n;i++) cin >> a[i];
	    ll sum = 0;
		for (int i=0;i<n;i++)
			sum += a[i];

		if (sum%360 == 0)
		{
			cout << "YES\n";
			return;
		}
		for (int mask=1;mask<(1<<n);mask++)
		{
			ll ans = 0;
			for (int i=0;i<n;i++)
			{
				if ((mask>>i)&1) ans += a[i];
				else ans-= a[i];
			}
			if (ans%360 == 0) {
				cout << "YES\n";
				return;
			}
			
		}
		cout << "NO\n";

	}
	int main(){
	    ios::sync_with_stdio(0);	
	    cin.tie(0);
	    
	    int t=1;
	    while(t--)solveTest();
	}