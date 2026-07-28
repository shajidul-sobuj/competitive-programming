/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2224C - Zhily and Bracket Swapping
 * Link: https://codeforces.com/contest/2224/problem/C
 * Submission ID: 373678349 (https://codeforces.com/contest/2224/submission/373678349)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1300 | Tags: constructive algorithms, greedy
 * Submitted At: 2026-05-06 07:30:01 UTC
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
    string a,b;
    cin >> a >> b;

    int tr = 0;
    int mis = 0;

    for (int i=0;i<n;i++) {
        if (a[i] == b[i]) {
            if (a[i] == '(') {
                tr++;
            } else {
                tr--;
            }
        } else {
            mis++;
        }

        if (tr < (mis%2)) {
            cout << "NO\n";
            return;
        }
    }
    
    if (tr == 0) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }

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