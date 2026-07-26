/**
 * Platform: AtCoder
 * Contest: AWC0001
 * Problem: C - awc0001 c
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:36:27
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector <int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    while(k--)
    {
        v.pop_back();
    }
    long long int dis = 0;
    for (int x : v)
    {
        dis+=x;
    }
    cout << dis << endl;
    return 0;
}