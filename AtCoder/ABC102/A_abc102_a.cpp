/**
 * Platform: AtCoder
 * Contest: ABC102
 * Problem: A - abc102 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:38:02
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    if (n%2==0)
    {
        cout << n << endl;
    }else{
        cout << (n*2) << endl;
    }
    return 0;
}