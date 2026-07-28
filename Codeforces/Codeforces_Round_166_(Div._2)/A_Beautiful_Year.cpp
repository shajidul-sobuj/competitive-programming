/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 271A - Beautiful Year
 * Link: https://codeforces.com/contest/271/problem/A
 * Submission ID: 374488208 (https://codeforces.com/contest/271/submission/374488208)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 124 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: brute force
 * Submitted At: 2026-05-14 10:22:33 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while(1)
    {
        n++;
        int t = n;
        // string s = to_string(n);
        set<char> st;
        st.insert(t%10);
        t /=10;
        st.insert(t%10);
        t /=10;
        st.insert(t%10);
        t /=10;
        st.insert(t%10);
        if (st.size() == 4) 
        {
            cout << n << endl;
            return 0;
        }
    }

    return 0;
}