/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1692A - Marathon
 * Link: https://codeforces.com/contest/1692/problem/A
 * Submission ID: 371557709 (https://codeforces.com/contest/1692/submission/371557709)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: 2026-04-17 19:07:09 UTC
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
    int a;
    cin >> a;
    int count = 0;
    for (int i=1;i<=3;i++)
    {
        int x;
        cin >> x;
        if (x > a) count++;
    }
    cout << count << endl;

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