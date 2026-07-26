/**
 * Platform: AtCoder
 * Contest: ABC466
 * Problem: D - abc466 d
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:41:26
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
    vector<int> a(m), b(m);
    for (int i=0;i<m;i++){
        cin >> a[i] >> b[i];
    }
    vector<bool> a_used(n+1, false), b_used(n+1, false);
    int ans = 0;
    for (int i=m-1;i>=0;i--){
        if(!a_used[a[i]]&&!b_used[b[i]]){
            ans++;
        }
        a_used[a[i]] = true;
        b_used[b[i]] = true;
    }
    cout << ans << endl;
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