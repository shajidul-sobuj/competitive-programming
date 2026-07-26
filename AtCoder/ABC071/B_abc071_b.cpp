/**
 * Platform: AtCoder
 * Contest: ABC071
 * Problem: B - abc071 b
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:37:18
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector <int> fr(26,0);
    for (int i=0;i<s.size();i++)
    {
        int idx = (int)s[i]-'a';
        fr[idx]++;
    }
    for (int i=0;i<26;i++)
    {
        int x = fr[i];
        if (x == 0)
        {
            cout << (char)(i+'a') << endl;
            return 0;
        }
    }
    cout << "None\n";
    return 0;
}