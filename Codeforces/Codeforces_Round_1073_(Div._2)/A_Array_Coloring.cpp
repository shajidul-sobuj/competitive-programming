/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2191A - Array Coloring
 * Link: https://codeforces.com/contest/2191/problem/A
 * Submission ID: 371242432 (https://codeforces.com/contest/2191/submission/371242432)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms
 * Submitted At: 2026-04-15 11:21:44 UTC
 */

#include <bits/stdc++.h>
using namespace std;

void boom()
{
    int n;
        cin >> n;
        bool blu = true;
        vector<pair<int, bool>>p;
        for (int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            if (blu)
            {
                p.push_back({x,true});
                blu = !blu;
            }
            else
            {
                p.push_back({x, false});
                blu = !blu;
            }
        }
        sort(p.begin(),p.end());
        for (int i=0;i<n-1;i++)
        {
            if (p[i].second == p[i+1].second)
            {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";

        // for (auto x:p)
        // {
        //     cout << x.first << " ";
        // }
        // cout << endl;

}
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        
        boom();
    }
    return 0;
}