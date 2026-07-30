/**
 * Platform: AtCoder
 * Problem: abc302 a
 * Contest: ABC302
 * URL: N/A
 * Synced via SyncForge Extension
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    cin >> a >> b;
    if (a%b==0) {
        cout << a/b << endl;
    }else {
        cout << (a/b)+1 << endl;
    }
    return 0;
}