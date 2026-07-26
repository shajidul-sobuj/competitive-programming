/**
 * Platform: AtCoder
 * Contest: ABC467
 * Problem: B - abc467 b
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:41:33
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int N = 1e5+10;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int ans = 0;
    while(n--){
        int x,y; cin >> x >> y;
        string s; cin >> s;
        if(s == "keep") ans += (y-x);
    }
    cout << ans << endl;

    return 0;
}