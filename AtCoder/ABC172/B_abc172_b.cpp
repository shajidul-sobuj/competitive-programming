/**
 * Platform: AtCoder
 * Contest: ABC172
 * Problem: B - abc172 b
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:37:27
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int count = 0;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]!=t[i]) count++;
    }
    cout << count << endl;
    return 0;
}