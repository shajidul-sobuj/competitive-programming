/**
 * Platform: AtCoder
 * Contest: ABC454
 * Problem: B - abc454 b
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:40:20
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i=0;i<n;i++) cin >> a[i];

    map<int, int> mp;
    for (int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    bool y1 = true;
    for (auto x:mp)
    {
        if (x.second > 1) 
        {
            cout << "No\n";
            y1 = false;
            break;
        }
    }
    if (y1)
    cout << "Yes\n";

    int i=1;
    for (auto x:mp)
    {
        if (x.first != i)
        {
            break;
        }
        i++;
    }
    i--;
    if (i == m) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}