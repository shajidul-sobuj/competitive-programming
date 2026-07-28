/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1175A - From Hero to Zero
 * Link: https://codeforces.com/contest/1175/problem/A
 * Submission ID: 371980322 (https://codeforces.com/contest/1175/submission/371980322)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 900 | Tags: implementation, math
 * Submitted At: 2026-04-21 13:57:12 UTC
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
    ll n,k;
    cin >> n >> k;
    ll count = 0;

    while(n)
    {
        // n--;
        if (n%k == 0) 
        {
            n = n/k;
            count++;
        }
        else 
        {
            ll md = n%k;
            n = n-md;
            count+=md;
        }
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