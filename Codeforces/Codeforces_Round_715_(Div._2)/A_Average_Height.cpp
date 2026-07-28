/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1509A - Average Height
 * Link: https://codeforces.com/contest/1509/problem/A
 * Submission ID: 370927545 (https://codeforces.com/contest/1509/submission/370927545)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms
 * Submitted At: 2026-04-13 09:36:17 UTC
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int tc;
   cin >> tc;
   while (tc--) {
      int n;
      cin >> n;
      vector<int> o, e;
      for (int i = 0; i < n; i++) {
         int x;
         cin >> x;
         if (x & 1) o.push_back(x);
         else e.push_back(x);
      }
      for (int x : o) cout << x << " ";
      for (int x : e) cout << x << " ";
      cout << endl;
   }
   return 0;
}