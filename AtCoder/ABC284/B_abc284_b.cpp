/**
 * Platform: AtCoder
 * Contest: ABC284
 * Problem: B - abc284 b
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:34:07
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int cd=0;
        for (int i=0;i<n;i++) {
            cin >> a[i];
        }
        for (int i=0;i<n;i++) {
            if (a[i]%2!=0) cd++;
        }
        cout << cd << endl;
    }
    return 0;
}