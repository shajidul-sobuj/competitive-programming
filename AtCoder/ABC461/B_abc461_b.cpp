/**
 * Platform: AtCoder
 * Contest: ABC461
 * Problem: B - abc461 b
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:40:55
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> b(n);
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++)
    {   
        int x; cin >> x;
        b[i].first = x;
        b[i].second = i;
    }
    sort(b.begin(),b.end());
    for (int i=0;i<n;i++)
    {
        if (a[i]!=b[i].second+1)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";

    return 0;
}