/**
 * Platform: AtCoder
 * Contest: ABC455
 * Problem: A - abc455 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:40:27
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;
    if (a != b && b == c) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}