/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1883A - Morning
 * Link: https://codeforces.com/contest/1883/problem/A
 * Submission ID: 373540017 (https://codeforces.com/contest/1883/submission/373540017)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: math
 * Submitted At: 2026-05-04 19:00:21 UTC
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
    string s;
    cin >> s;
    int count = 0;
    for (int i=0;i<4;i++)
    {
        int x = s[i]-'0';
        if (x == 0) x = 10;
        if (i == 0)
        {
            if (x == 1) count++;
            else 
            {
                count += abs(x-1);
                count++;
            }
        }
        else
        {
            int y = s[i-1]-'0';
            if (y == 0) y=10;
            if (s[i] == s[i-1]) count++;
            else {
                count += abs(x-y);
                count++;
            }
            // cout << " Y -> " << y << " ";
        }
        // cout << " x -> " << x << " ";
        
    }
    cout << count << endl;
    // cout << endl;

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