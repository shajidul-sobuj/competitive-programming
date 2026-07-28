/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2195B - Heapify 1
 * Link: https://codeforces.com/contest/2195/problem/B
 * Submission ID: 375028229 (https://codeforces.com/contest/2195/submission/375028229)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 234 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 900 | Tags: implementation, sortings
 * Submitted At: 2026-05-18 07:13:06 UTC
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5+7; // 2000000

vector<int> group(N+1,-1);

void precompute(){
    int grp = 1;
    for(int i=1; i<=N; i++){
        if(group[i] == -1){
            for(int j=i; j<=N; j *= 2){
                group[j] = grp;
            }
            grp++;
        }
    }
}


int main(){
    precompute();

    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++) cin >> a[i];


        bool f=true;
        for(int i=1; i<=n; i++){
            if(group[i] != group[a[i]]){
                f = false;
                break;
            }
        }

        if(f) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}
//-1