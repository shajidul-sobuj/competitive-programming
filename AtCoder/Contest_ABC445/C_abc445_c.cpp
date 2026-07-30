/**
 * Platform: AtCoder
 * Problem: abc445 c
 * Contest: ABC445
 * URL: N/A
 * Synced via SyncForge Extension
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v(n+1);
    for (int i=1;i<=n;i++) cin >> v[i];
    for (int i=1;i<=n;i++)
    {
        int idx = i;

        while (idx != v[idx]) {
            v[idx] = v[v[idx]];
            idx = v[idx];
        }

        cout << idx << " ";
    }
    return 0;
}