/**
 * Platform: AtCoder
 * Contest: ABC452
 * Problem: A - abc452 a
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:39:38
 */

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
    int m,d;
    cin >> m >> d;
    if ((m == 1 && d == 7) || (m == 3 && d == 3) || (m == 5 && d == 5) || (m == 7 && d == 7) || (m == 9 && d == 9)) cout <<"Yes\n";
    else cout << "No\n";



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

// January 
// 7
// March 
// 3
// May 
// 5
// July 
// 7
// September 
// 9