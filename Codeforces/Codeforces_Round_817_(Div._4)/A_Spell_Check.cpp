/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1722A - Spell Check
 * Link: https://codeforces.com/contest/1722/problem/A
 * Submission ID: 371902179 (https://codeforces.com/contest/1722/submission/371902179)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: 2026-04-20 17:28:47 UTC
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
    string t = {"Timur"};
    int n;
    cin >> n;
    string s;
    cin >> s;
    sort(all(s));
    sort(all(t));

    // cout << s << " " << t << endl;
    if (s == t) cout << "YES\n";
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