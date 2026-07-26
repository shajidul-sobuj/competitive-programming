/**
 * Platform: AtCoder
 * Contest: ABC289
 * Problem: A - abc289 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:35:20
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c=='0') cout << "1";
        else cout << "0";
    }
    return 0;
}