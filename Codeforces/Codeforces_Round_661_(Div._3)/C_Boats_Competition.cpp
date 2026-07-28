/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1399C - Boats Competition
 * Link: https://codeforces.com/contest/1399/problem/C
 * Submission ID: 375607527 (https://codeforces.com/contest/1399/submission/375607527)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1200 | Tags: brute force, greedy, two pointers
 * Submitted At: 2026-05-22 06:44:13 UTC
 */

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define sz(x) (int)(x).size()
// #define endl '\n'

// #define forr(i,a,b) for(int i=a;i<b;i++)
// #define forb(i,a,b) for(int i=a;i>=b;i--)

// const ll INF = 1e18;
// const int MOD = 1e9 + 7;

// void yes() { cout << "YES\n"; }
// void no()  { cout << "NO\n";  }

// void boom()
// {
//     int n; cin >> n;
//     vector<int>a(n);
//     bool assen = true;
//     for (auto &x:a) cin >> x;
//     sort(all(a));
//     for (int i=0;i<n-1;i++)
//     {
//         if (a[i]+1 != a[i+1])
//         {
//             assen = false;
//             break;
//         }
//     }
//     if (assen) 
//     {
//         cout << n/2 << endl;
//         return;
//     }
//     map<int, int> mp;
//     for (auto x:a) mp[x]++;
//     vector<int> mx;
//     for (auto [x,y]:mp)
//     {
//         mx.push_back(y);
//     }
//     sort(all(mx),greater<int>());
//     int mx1 = mx.front(), mx2 = -1;
//     if (mx.size() > 1)
//     mx2 = mx[1];
//     int ans = max((mx1/2), mx2);
//     // cout << mx1 << " " << mx2 << endl;
//     cout << ans << endl;
// }


// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         boom();
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

#define forr(i,a,b) for(int i=a;i<b;i++)
#define forb(i,a,b) for(int i=a;i>=b;i--)

const ll INF = 1e18;
const int MOD = 1e9 + 7;

void yes() { cout << "YES\n"; }
void no()  { cout << "NO\n";  }

void boom()
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x:a) cin >> x;
    sort(all(a));
    int ans = 0;
    for (int i=2;i<=2*n;i++)
    {
        int l=0,r=n-1;
        int sum = 0;
        while(l<r)
        {
            if (a[r]+a[l] == i) 
            {
                sum++;
                l++;
                r--;
            }
            else if (a[r]+a[l] < i)
            {
                l++;
            }
            else r--;
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        boom();
    }

    return 0;
}