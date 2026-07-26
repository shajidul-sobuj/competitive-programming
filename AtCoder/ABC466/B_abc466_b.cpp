/**
 * Platform: AtCoder
 * Contest: ABC466
 * Problem: B - abc466 b
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:41:19
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
const int N = 1e5+10;

void boom()
{
    int n; cin >> n;
    int m; cin >> m;
    map<int, int>mp;
    for (int i=0;i<n;i++){
        int x; cin >> x;
        int y; cin >> y;
        mp[x] = max(mp[x],y);
    }
    for (int i=1;i<=m;i++){
        if (mp[i] == 0) cout << -1 << " ";
        else cout << mp[i] << " ";
        // cout << x << " " << y << endl;
    }

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        boom();
    }

    return 0;
}