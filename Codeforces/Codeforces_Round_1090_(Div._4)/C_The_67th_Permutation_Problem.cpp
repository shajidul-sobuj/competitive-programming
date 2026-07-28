/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2218C - The 67th Permutation Problem
 * Link: https://codeforces.com/contest/2218/problem/C
 * Submission ID: 369656284 (https://codeforces.com/contest/2218/submission/369656284)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 400 KB
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms, greedy, math
 * Submitted At: 2026-04-04 14:55:39 UTC
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
    vector<int> a;
    int l=1,r=(n*3);
    while(l < r)
    {
        a.push_back(l);
        a.push_back(r-1);
        a.push_back(r);
        l++;
        r-=2;
    }
    for (auto x : a)
    {
        cout << x << " ";
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