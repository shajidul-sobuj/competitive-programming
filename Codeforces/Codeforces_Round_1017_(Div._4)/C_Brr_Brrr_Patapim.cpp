/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2094C - Brr Brrr Patapim
 * Link: https://codeforces.com/contest/2094/problem/C
 * Submission ID: 377843980 (https://codeforces.com/contest/2094/submission/377843980)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 93 ms | Memory: N/A
 * Verdict: OK
 * Rating: 900 | Tags: math
 * Submitted At: 2026-06-09 02:46:33 UTC
 */

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'

void boom()
{
    int n; cin >> n;
    vector<vector<int>> a(n);
    vector<int> p(((2*n)+1),0);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            int x; cin >> x;
            // int l=i+1,r=j+1;
            p[i+j] = x;
        }
    }
    // for (auto x:p)
    // {
    //     cout << x << " ";
    // }
    int mis = 1;
    for (int i=1;i<=2*n;i++)
    {
        auto it = find(p.begin(), p.end(), i);
        if (it == p.end())
        {
            mis = i;
            break;
        }
    }
    cout << mis << " ";
    for (int i=2;i<p.size();i++) cout << p[i] << " ";
    cout << endl;
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