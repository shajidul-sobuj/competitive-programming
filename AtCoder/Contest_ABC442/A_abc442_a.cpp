/**
 * Platform: AtCoder
 * Problem: abc442 a
 * Contest: ABC442
 * URL: N/A
 * Synced via SyncForge Extension
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