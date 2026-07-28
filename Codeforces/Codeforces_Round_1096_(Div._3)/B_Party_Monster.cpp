/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2227B - Party Monster
 * Link: https://codeforces.com/contest/2227/problem/B
 * Submission ID: 373092561 (https://codeforces.com/contest/2227/submission/373092561)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy
 * Submitted At: 2026-04-30 14:49:15 UTC
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    sort(all(s));
    // cout << s << endl;
    stack<char> st;
    for (int i=0;i<n;i++)
    {
        if (st.empty()) st.push(s[i]);
        else if (st.top() == '(' && s[i] == ')') st.pop();
        else st.push(s[i]);
    }
    if (st.empty()) cout << "YES\n";
    else cout << "NO\n";

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