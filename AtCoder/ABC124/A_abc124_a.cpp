/**
 * Platform: AtCoder
 * Contest: ABC124
 * Problem: A - abc124 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:37:10
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