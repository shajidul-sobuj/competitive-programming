/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1788A - One and Two
 * Link: https://codeforces.com/contest/1788/problem/A
 * Submission ID: 371554533 (https://codeforces.com/contest/1788/submission/371554533)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force, implementation, math
 * Submitted At: 2026-04-17 18:35:46 UTC
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
    vector<int> a(n);
    int count=0;
    for (int i=0;i<n;i++) 
    {
        cin >> a[i];
        if (a[i] == 2) count++;
    }
    
    if (count%2 == 1) 
    {
        cout << -1 << endl;
        return;
    }
    if (count == 0)
    {
        cout << 1 << endl;
        return;
    }
    int k=count/2;
    int co = 0;
    for (int i=0;i<n;i++)
    {
        if (a[i] == 2) co++;
        if (co == k)
        {
            cout << i+1 << endl;
            return;
        }
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