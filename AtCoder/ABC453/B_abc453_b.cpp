/**
 * Platform: AtCoder
 * Contest: ABC453
 * Problem: B - abc453 b
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:40:05
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
    int n,k;
    cin >> n >> k;

    int x;
    cin >> x;
    int last = x;
    cout << 0 << " " << x << endl;
    for (int i=1;i<=n;i++)
    {
        int y;
        cin >> y;
        if ((abs(y-last)) >= k)
        {
            last = y;
            cout << i << " " << y << endl;
        }
    }

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