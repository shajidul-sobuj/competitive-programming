/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1873D - 1D Eraser
 * Link: https://codeforces.com/contest/1873/problem/D
 * Submission ID: 371337169 (https://codeforces.com/contest/1873/submission/371337169)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, implementation, two pointers
 * Submitted At: 2026-04-16 06:47:59 UTC
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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l=0,r=k-1;
    int op = 0;
    while (r<n)
    {
        
        if (s[l] == 'B' || r == n-1)
        {
            int count = 0;
            for (int i=l;i<=r;i++)
            {
                if (s[i] == 'B')
                {
                    count++;
                    s[i] = 'W';
                }
            }
            if (count) op++;
        }
        l++;
        r++;
    }
    cout << op << endl;
    

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