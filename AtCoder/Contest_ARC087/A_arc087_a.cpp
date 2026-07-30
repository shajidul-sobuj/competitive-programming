/**
 * Platform: AtCoder
 * Problem: arc087 a
 * Contest: ARC087
 * URL: N/A
 * Synced via SyncForge Extension
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