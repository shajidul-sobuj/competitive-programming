/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 2195C - Dice Roll Sequence
 * Link: https://codeforces.com/contest/2195/problem/C
 * Submission ID: 375031797 (https://codeforces.com/contest/2195/submission/375031797)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 203 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1100 | Tags: dp, greedy
 * Submitted At: 2026-05-18 07:52:15 UTC
 */

//
//
//
//
//
//           dummy solve
//
//
//
//
//
//


#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> group(7);

int main(){
    group[1] = 1;
    group[6] = 1;
    group[2] = 2;
    group[5] = 2;
    group[3] = 3;
    group[4] = 3;


    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];


        vector<int> block(n);
        for(int i=0; i<n; i++){
            block[i] = group[a[i]];
        }

        // for(auto i: block) cout << i << " "; cout << endl;

        int cnt = 0;
        for(int i=0; i<n; ){
            int j=i, sz=0;
            while(j<n && block[j]==block[i]){
                sz++, j++;
            }
            cnt += sz/2;
            i = j; 
        }

        cout << cnt << endl;

    }

    return 0;
}