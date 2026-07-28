/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2124A - Deranged Deletions
 * Link: https://codeforces.com/contest/2124/problem/A
 * Submission ID: 377844960 (https://codeforces.com/contest/2124/submission/377844960)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 31 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy, sortings
 * Submitted At: 2026-06-09 03:11:39 UTC
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'

void boom()
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x:a) cin >> x;
    vector<int> b = a;
    sort(b.begin(), b.end());
    if (a == b) 
    {
        cout << "NO\n";
        return;
    }
    
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i]>a[j]) 
            {
                cout << "YES\n" << 2 << endl;
                cout << a[i] << " " << a[j] << endl;
                return;
            }
        }
    }
    cout << "NO\n";
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t=1;
    cin >> t;
    while(t--)
        boom();
    return 0;
}