/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1791C - Prepend and Append
 * Link: https://codeforces.com/contest/1791/problem/C
 * Submission ID: 370264536 (https://codeforces.com/contest/1791/submission/370264536)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation, two pointers
 * Submitted At: 2026-04-08 10:44:59 UTC
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
    deque<char> dq;
    string s;
    cin >> s;
    int l,r;
    bool yes = false;
    for (int i=0,j=sz(s)-1;i<=j;i++,j--)
    {
        if (s[i] == s[j])
        {
            yes = true;
            l = i;
            r = j;
            break;
        }
    }
    if (yes)
    {
        cout << r-l+1 << endl;
    }
    else
    cout << 0 << endl;

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