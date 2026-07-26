/**
 * Platform: AtCoder
 * Contest: ABC442
 * Problem: A - abc442 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:35:46
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for (int i=0;i<s.size();i++)
    {
        if(s[i]=='i'|| s[i]=='j') count++;
    }
    cout << count << endl;
    return 0;
}