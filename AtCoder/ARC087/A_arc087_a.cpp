/**
 * Platform: AtCoder
 * Contest: ARC087
 * Problem: A - arc087 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:39:01
 */

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    map<int, int> fr;
    while(n--)
    {
        int x;
        cin >> x;
        fr[x]++;
    }
    ll count = 0;
    for (auto [x,y] : fr)
    {
        // cout << x << " -> " << y << endl;
        if (x > y)
        {
            count += y;
        }else{
            count += y-x;
        }
    }
    cout << count << endl;
    return 0;
}