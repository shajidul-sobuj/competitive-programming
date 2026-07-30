/**
 * Platform: Codeforces
 * Problem: Lawn Mower
 * Contest: 2194
 * URL: https://codeforces.com/contest/2194/problem/A
 * Synced via SyncForge Extension
 */

#include <iostream>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            long long n, w;
            cin >> n >> w;
            cout << n - (n / w) << "\n";
        }
    }
    return 0;
}