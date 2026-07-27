/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1352A - Sum of Round Numbers
 * Link: https://codeforces.com/contest/1352/problem/A
 * Submission ID: 384480637 (https://codeforces.com/contest/1352/submission/384480637)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: implementation, math
 * Submitted At: 2026-07-27 08:03:08 UTC
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6;

void boom(){
    int n; cin >> n;
    vector<int> a;
    int dv = 10;
    while(n){
        if(dv == N) break;
        int re = n%dv;
        if(re) a.push_back(re);
        n-=re;
        dv*=10;
    }
    cout << a.size() << endl;
    for(auto x:a) cout << x << " ";
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