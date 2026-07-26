/**
 * Platform: AtCoder
 * Contest: ABC235
 * Problem: B - abc235 b
 * Language: C++23 (GCC 15.2.0)
 * Date: 2026-07-26 21:35:38
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    int tl = a[0];
    for (int i=0;i<n-1;i++)
    {
        if (a[i]<a[i+1])
        {
            tl = a[i+1];
        }
        else{
            break;
        }
    }
    cout << tl << endl;
    return 0;
}