/**
 * Platform: AtCoder
 * Problem: awc0003 a
 * Contest: AWC0003
 * URL: N/A
 * Synced via SyncForge Extension
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,k;
    cin >> n >> k;
    long long int count = 0;
    while(n--)
    {
        long long int x,y;
        cin >> x >> y;
        if (x*y>=k) count++;
    }
    cout << count << endl;
    return 0;
}