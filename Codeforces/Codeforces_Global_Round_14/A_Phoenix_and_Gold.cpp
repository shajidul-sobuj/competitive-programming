/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1515A - Phoenix and Gold
 * Link: https://codeforces.com/contest/1515/problem/A
 * Submission ID: 370687482 (https://codeforces.com/contest/1515/submission/370687482)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: constructive algorithms, greedy, math
 * Submitted At: 2026-04-11 15:17:57 UTC
 */

#include <bits/stdc++.h>

using namespace std;

const int N = 10010;

int t, n, x, a[N];

int main() {
   cin >> t;
   while (t--) {
      scanf("%d %d", &n, &x);
      for (int i = 1; i <= n; ++i) {
         scanf("%d", a + i);
      }
      sort(a + 1, a + n + 1);
      int at = 0, tot = 0;
      while (at < n and tot < x) tot += a[++at];
      if (tot == x) {
         if (at == n) {
            puts("NO");
            continue;
         }
         swap(a[at], a[at + 1]);
      }
      puts("YES");
      for (int i = 1; i <= n; ++i) printf("%d ", a[i]);
      puts("");
   }
   return 0;
}
