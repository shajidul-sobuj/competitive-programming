/**
 * Platform: AtCoder
 * Contest: ABC125
 * Problem: A - abc125 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:37:44
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,k;
    cin >> a >> b >> k;
    k = k+0.5;
    int ans = (k/a)*b;
    cout << (int)ans << endl;
    return 0;
}