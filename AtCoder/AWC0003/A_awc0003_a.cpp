/**
 * Platform: AtCoder
 * Contest: AWC0003
 * Problem: A - awc0003 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:36:34
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