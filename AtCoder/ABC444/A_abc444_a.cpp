/**
 * Platform: AtCoder
 * Contest: ABC444
 * Problem: A - abc444 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:35:54
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0]==s[1] &&  s[0]==s[2])
    {
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    
    return 0;
}