/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2236C - Omsk Programmers
 * Link: https://codeforces.com/contest/2236/problem/C
 * Submission ID: 378405415 (https://codeforces.com/contest/2236/submission/378405415)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 140 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1000 | Tags: brute force, greedy, math
 * Submitted At: 2026-06-12 16:03:26 UTC
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
    int a; cin >> a;
    int b; cin >> b;
    int x; cin >> x;
    int ans = 0;

    int as = abs(a-b);
    int vag_a = 0;
    int vag_b = 0;
    int vag_ab = INT_MAX;

    int ta = a; int cta = 0;
    while(ta)
    {
        ta /= x;
        if (ta == b)
        {
            break;
        }
        cta++;
    }
    if (ta == b) vag_a = cta;
    else vag_a = cta+b;

    int tb = b; int ctb = 0;
    while(tb)
    {
        tb /= x;
        if (tb == a)
        {
            break;
        }
        ctb++;
    }
    if (tb == a) vag_b = ctb;
    else vag_b = ctb+a;

    int sa = a; int csa = 0;
    while(1)
    {
        int sb = b; int csb = 0;
        while(1)
        {
            vag_ab = min(vag_ab, (csb+csa+abs(sa-sb)));
            
            if (sb == 0) break;
            sb /= x;
            csb++;
        }

        if(sa == 0) break;
        sa /= x;
        csa++;
    }




    // cout << as << " " << vag_a << " " << vag_b << " " << cta+ctb << " " << vag_ab << endl;
    
    // cout << min({as,vag_a,vag_b,vag_ab,cta+ctb}) << endl;
    cout << vag_ab << endl;

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