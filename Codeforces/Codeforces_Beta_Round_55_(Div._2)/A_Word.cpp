/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 59A - Word
 * Link: https://codeforces.com/contest/59/problem/A
 * Submission ID: 372643670 (https://codeforces.com/contest/59/submission/372643670)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 124 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation, strings
 * Submitted At: 2026-04-26 18:07:03 UTC
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int up = 0,lw = 0;
	for (auto x:s)
	{
	    if (x >= 'A' && x <= 'Z') up++;
	    else lw++;
	}
	
	if (up>lw) 
	{
	    for (auto &x:s) x = toupper(x);
	}
	else 
	{
	    for (auto &x:s) x = tolower(x);
	}
	
	cout << s << endl;

}
