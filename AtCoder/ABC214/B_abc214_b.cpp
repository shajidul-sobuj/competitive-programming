/**
 * Platform: AtCoder
 * Contest: ABC214
 * Problem: B - abc214 b
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:37:52
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,t;
    cin >> s >> t;
    int count = 0;
    for (int i=0;i<=s;i++)
    {
        for (int j=0;j<=s;j++)
        {
            for (int k=0;k<=s;k++)
            {
                if ( (i+j+k <= s) &&  (i*j*k <= t))
                    count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}