/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1385B - Restore the Permutation by Merger
 * Link: https://codeforces.com/contest/1385/problem/B
 * Submission ID: 377774012 (https://codeforces.com/contest/1385/submission/377774012)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: greedy
 * Submitted At: 2026-06-08 11:40:00 UTC
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void boom()
{
    unordered_multiset<int>st;
    vector<int>a;
    int n; cin >> n;
    for (int i=0;i<n*2;i++)
    {
        int x; cin >> x;
        if (!st.count(x))
        st.insert(x);
        auto it = find(a.begin(),a.end(),x);
        if (it == a.end())
        a.push_back(x);

    }

    // for (auto x:st)
    // {
    //     cout << x << " ";
    //     // a.push_back(x);
    // }
    for (auto x:a)
    {
        cout << x << " ";
        // a.push_back(x);
    }
    // for  (int i=a.size()-1;i>=0;i--)
    // {
    //     cout << a[i] << " ";
    // }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        boom();
    }
    return 0;
}