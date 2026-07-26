/**
 * Platform: AtCoder
 * Contest: ABC326
 * Problem: A - abc326 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:34:24
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    int t = x-y;
    if ((t > 0 && t <= 3) || ((t < 0 && t >= -2))) {
        cout << "Yes\n";
    }else {
        cout << "No\n";
    }
    return 0;
}