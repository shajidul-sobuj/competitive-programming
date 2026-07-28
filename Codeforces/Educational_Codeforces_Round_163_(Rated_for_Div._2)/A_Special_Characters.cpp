/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1948A - Special Characters
 * Link: https://codeforces.com/contest/1948/problem/A
 * Submission ID: 375692693 (https://codeforces.com/contest/1948/submission/375692693)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force, constructive algorithms
 * Submitted At: 2026-05-22 20:56:04 UTC
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
    int n; cin >> n;
    if (n == 1 || n%2 !=0) 
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";

    for (int i=1;i<=n;i++)
    {
        if (i%3 == 0) 
        {
            cout << "B";
            n++;
        }
        else cout << "A";
    }
    cout << endl;
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