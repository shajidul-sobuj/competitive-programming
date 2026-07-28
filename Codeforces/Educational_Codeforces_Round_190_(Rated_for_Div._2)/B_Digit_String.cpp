/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2230B - Digit String
 * Link: https://codeforces.com/contest/2230/problem/B
 * Submission ID: 375118420 (https://codeforces.com/contest/2230/submission/375118420)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1000 | Tags: greedy, implementation, math
 * Submitted At: 2026-05-18 15:27:15 UTC
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
    map<char, int>mp;
    for (int i=0;i<sz(s);i++)
    {
        mp[s[i]]++;
    }
    int pre13=0,pre2=0,dif=0;
    for (char c : s) {
    if (c == '1' || c == '3') pre13++;
    else if (c == '2') pre2++;
    
    dif = min(dif, pre13-pre2);
    }
    cout << mp['4']+mp['2']+dif << endl;
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