/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1506A - Strange Table
 * Link: https://codeforces.com/contest/1506/problem/A
 * Submission ID: 371036951 (https://codeforces.com/contest/1506/submission/371036951)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 93 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: math
 * Submitted At: 2026-04-13 17:35:04 UTC
 */

#include <iostream>
using namespace std;

int main() {
   long long t, n, m, x, a, b, c;
   cin >> t;

   while (t--)
   {
      cin >> n >> m >> x;
      a = x / n;

      a += 1;
      b = x % n;
      if (b == 0)
      {
         b = n - 1;
         a -= 1;
      }
      else
         b -= 1;
      c = b * m + a;

      cout << c << "\n";
   }
   return 0;
}