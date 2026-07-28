/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 977A - Wrong Subtraction
 * Link: https://codeforces.com/contest/977/problem/A
 * Submission ID: 371810800 (https://codeforces.com/contest/977/submission/371810800)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: 2026-04-19 19:37:51 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int k;
    cin >> k;
    while(k--)
    {
        if (s.back() == '0') s.pop_back();
        else s[s.size()-1]--;
    }
    cout << s << endl;
    return 0;
}