/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2234B - Palindrome, Twelve and Two Terms
 * Link: https://codeforces.com/contest/2234/problem/B
 * Submission ID: 377644884 (https://codeforces.com/contest/2234/submission/377644884)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force, constructive algorithms, math
 * Submitted At: 2026-06-07 15:11:03 UTC
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

bool isPal(ll n) {
    string s = to_string(n);
    string rs = s;
    reverse(all(rs));
    return s == rs;
}

void boom()
{
    ll n; cin >> n;
    if (n%12 == 0)
    {
        cout << 0 << " " << n << endl;
        return;
    }
    if (isPal(n))
    {
        cout << n << " " << 0 << endl;
        return;
    }

    for (ll a=0;a<=n;a++)
    {
        ll b = n-a;

        if (b%12 == 0 && isPal(a)) {
            cout << a << " " << b << endl;
            return;
        }
    }
    cout << -1 << endl;
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