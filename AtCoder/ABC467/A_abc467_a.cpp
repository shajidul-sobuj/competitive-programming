/**
 * Platform: AtCoder
 * Contest: ABC467
 * Problem: A - abc467 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:41:42
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void boom()
{
    int h,w; cin >> h >> w;
    if((w*10000)>=(25*h*h)) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) boom();
    return 0;
}