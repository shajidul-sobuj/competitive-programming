/**
 * Platform: AtCoder
 * Problem: abc124 a
 * Contest: ABC124
 * URL: N/A
 * Synced via SyncForge Extension
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int x,y;
    cin >> x >> y;

    if (x<y)
        swap(x,y);
    
    long long int ans = x;
    x--;
    ans+=max(x,y);
    cout << ans << endl;

    return 0;
}