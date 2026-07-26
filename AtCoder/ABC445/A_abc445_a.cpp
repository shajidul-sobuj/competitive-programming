/**
 * Platform: AtCoder
 * Contest: ABC445
 * Problem: A - abc445 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:36:43
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0]==s[s.size()-1])
    {
        cout << "Yes\n";
    }else {
        cout << "No\n";
    }
    return 0;
}