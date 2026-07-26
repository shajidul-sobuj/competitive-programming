/**
 * Platform: AtCoder
 * Contest: ABC149
 * Problem: B - abc149 b
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:34:32
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    if (k <= a) {
        a -= k;
    } else {
        k -= a;
        a = 0;
        b = max(0LL, b - k);
    }

    cout << a << " " << b << endl;
    return 0;
}
