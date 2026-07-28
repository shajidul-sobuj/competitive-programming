/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1669A - Division?
 * Link: https://codeforces.com/contest/1669/problem/A
 * Submission ID: 371687039 (https://codeforces.com/contest/1669/submission/371687039)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation
 * Submitted At: 2026-04-18 18:07:42 UTC
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
    if (n >= 1900) cout << "Division 1\n";
    else if (n >= 1600 && n <= 1899) cout << "Division 2\n";
    else if (n >= 1400 && n <= 1599) cout << "Division 3\n";
    else cout << "Division 4\n";

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