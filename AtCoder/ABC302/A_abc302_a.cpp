/**
 * Platform: AtCoder
 * Contest: ABC302
 * Problem: A - abc302 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:34:15
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