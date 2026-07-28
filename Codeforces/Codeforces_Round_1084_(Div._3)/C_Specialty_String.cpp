/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2200C - Specialty String
 * Link: https://codeforces.com/contest/2200/problem/C
 * Submission ID: 374335291 (https://codeforces.com/contest/2200/submission/374335291)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 900 | Tags: brute force, greedy, strings
 * Submitted At: 2026-05-12 21:36:07 UTC
 */

#include <bits/stdc++.h>
using namespace std;

void pookie()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    for (char c : s)
    {
        if (st.empty())
            st.push(c);
        else if (st.top() == c)
            st.pop();
        else
            st.push(c);
    }
    if (st.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        pookie();
    }

    return 0;
}

//-1