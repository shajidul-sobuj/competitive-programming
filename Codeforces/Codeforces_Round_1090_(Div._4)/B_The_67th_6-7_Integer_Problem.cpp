/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2218B - The 67th 6-7 Integer Problem
 * Link: https://codeforces.com/contest/2218/problem/B
 * Submission ID: 369636762 (https://codeforces.com/contest/2218/submission/369636762)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, math
 * Submitted At: 2026-04-04 14:46:17 UTC
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
    int n = 7;
    multiset<int> st;
    while(n--)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    int p =6;
    int sum = 0;
    for (auto x : st)
    {
        sum += (x*(-1));
    }
    sum = sum+*st.rbegin()+*st.rbegin();
    cout << sum << endl;

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