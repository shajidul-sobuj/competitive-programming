/**
 * Platform: AtCoder
 * Contest: TESSOKU-BOOK
 * Problem: A - dp a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:41:03
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int N = 1e5+10;

vector<int> h(N);
vector<int> dp(N,-1);

int fun(int i)
{
    if (i == 0) return 0;
    int cost = INT_MAX;
    if (dp[i] != -1) return dp[i];
    cost = min(cost, (fun(i-1)+abs(h[i]-h[i-1])));
    if (i>1) 
        cost = min(cost, (fun(i-2)+abs(h[i]-h[i-2])));
    return dp[i] = cost;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (auto &x:h) cin >> x;
    cout << fun(n-1) << endl;

    return 0;
}