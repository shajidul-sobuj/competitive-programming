/**
 * Platform: AtCoder
 * Contest: ABC455
 * Problem: C - abc455 c
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:40:35
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin >> n >> k;
    set<ll> st;
    vector<ll> a(n);
    for (ll i=0;i<n;i++) cin >> a[i];
    for (ll i=0;i<n;i++)
    {
        ll x = a[i];
        st.insert(x);
    }
    
    map<ll, ll>mp;
    for (ll i=0;i<n;i++)
    {
        mp[a[i]] += a[i]; 
    }

    vector<pair<ll, ll>> p;
    for (auto [x,y]:mp)
    {
        p.push_back({y,x});
    }
    sort(p.begin(),p.end(),greater<pair<ll, ll>>());
    set<ll>ss;
    ll l = min(k, (ll)p.size());
    for (ll i=0;i<l;i++)
    {
        ss.insert(p[i].second);
    }
    // for (auto [x,y]:p)
    // {
    //     cout << x << " -> " << y << endl;
    // }
    // cout << endl;
    // for (auto x:ss)
    // {
    //     cout << x << " ";
    // }


    ll sum = 0;
    for (ll i=0;i<n;i++)
    {
        if (!ss.count(a[i])) sum+=a[i];
    }
    cout << sum << endl;
    
    return 0;
}