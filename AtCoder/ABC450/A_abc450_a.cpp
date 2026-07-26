/**
 * Platform: AtCoder
 * Contest: ABC450
 * Problem: A - abc450 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:39:16
 */

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i=n;i>1;i--)
    {
        cout << i << ",";
    }
    cout << 1 << endl;
    return 0;
}