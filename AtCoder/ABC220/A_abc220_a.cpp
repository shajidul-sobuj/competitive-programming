/**
 * Platform: AtCoder
 * Contest: ABC220
 * Problem: A - abc220 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:37:35
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a,b,k;
    cin >> a >> b >> k;
    for (long long int i=a;i<=b;i++)
    {
        if (i%k == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}