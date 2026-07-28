/*
 * Codeforces Auto Push - Synced Solution
 *
 * Problem: 1692E - Binary Deque
 * Link: https://codeforces.com/contest/1692/problem/E
 * Submission ID: 375319549 (https://codeforces.com/contest/1692/submission/375319549)
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1200 | Tags: binary search, implementation, two pointers
 * Submitted At: 2026-05-20 08:35:13 UTC
 */

// #include <bits/stdc++.h>
// using namespace std;
 
// #define ll long long
// #define endl '\n'

// void boom()
// {
//     int n,k; cin >> n >> k;
//     vector<int> a(n);
//     int sum = 0;
//     for (int i=0;i<n;i++)
//     {
//         cin >> a[i];
//         sum += a[i];
//     }

//     if (sum < k)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     if (sum == k)
//     {
//         cout << 0 << endl;
//         return;
//     }
//     int ssum = 0;
//     int j,i;

//     if (n%2 == 0)
//     {
//         j = n/2;
//         i = j-1;
//         for (;i>=0&&j<n;)
//         {
//             if (a[i] == 0 && a[i] == 0)
//             {
//                 i--; j++;
//             }
//             else if (ssum<k && (a[i] == 1 && a[j] == 0))
//             {
//                 ssum++; i--; j++;
//             }
//             else if (ssum<k && (a[i] == 0 && a[j] == 1))
//             {
//                 ssum++; i--; j++;
//             }
//             else if (ssum == k && a[i] == 0) i--;
//             else if (ssum == k && a[j] == 0) j++;
//             else if (ssum == k && (a[i] == 1 && a[j] == 1)) break;
//             else if (ssum < k && (a[i] == 1 && a[j] == 1))
//             {
//                 ssum++; i--;
//                 if (ssum < k)
//                 {
//                     ssum++;  j++;
//                 }
//                 else break;
//             }
//         }
//         i++; j--;
//         // cout << i << " " << j << endl;
//         cout << (n-(j-i+1)) << endl;
//     }
//     else 
//     {
//         int mid = n/2;
//         i = mid-1;
//         j = mid+1;
//         ssum+= a[mid];
//         for (;i>=0&&j<n;)
//         {
//             if (a[i] == 0 && a[i] == 0)
//             {
//                 i--; j++;
//             }
//             else if (ssum<k && (a[i] == 1 && a[j] == 0))
//             {
//                 ssum++; i--; j++;
//             }
//             else if (ssum<k && (a[i] == 0 && a[j] == 1))
//             {
//                 ssum++; i--; j++;
//             }
//             else if (ssum == k && a[i] == 0) i--;
//             else if (ssum == k && a[j] == 0) j++;
//             else if (ssum == k && (a[i] == 1 && a[j] == 1)) break;
//             else if (ssum < k && (a[i] == 1 && a[j] == 1))
//             {
//                 ssum++; i--;
//                 if (ssum < k)
//                 {
//                     ssum++;  j++;
//                 }
//                 else break;
//             }
//         }
//         i++; j--;
//         // cout << i << " " << j << endl;
//         cout << (n-(j-i+1)) << endl;
//     }
// }
 
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int t=1;
//     cin >> t;
//     while(t--)
//         boom();
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'

void boom()
{
    int n,k; cin >> n >> k;
    vector<int> a(n);
    int sum = 0;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum < k)
    {
        cout << -1 << endl;
        return;
    }
    if (sum == k)
    {
        cout << 0 << endl;
        return;
    }
    int ssum = 0;
    int l=0,r=0;
    int ans = 0;
    while(r<n)
    {
        ssum+=a[r];
        if (ssum == k)
        {
            int len = r-l+1;
            ans = max(len, ans);
            // cout << l << " " << r << endl;

            // if (a[r+1] == 0)
            // {
            //     r++;
            //     while(a[r] == 0)
            //     {
            //         r++;
            //     }
            //     int len = r-l;
            //     ans = max(len, ans);
            //     cout << l << " " << r << endl;
            // }
        }
        else if (ssum>k)
        {
            while(ssum>k)
            {
                ssum-=a[l];
                l++;
            }
            if (ssum == k)
            {
                int len = (r-l+1);
                ans = max(len, ans);
                // cout << l << " " << r << endl;
            }
            // if (a[l] == 1) 
            // {
            //     ssum-=a[l];
            //     l++;
            // }
            // else 
            // {
            //     while(a[l] == 0)
            //     {
            //         l++;
            //     }
            //     if (a[l] == 1) 
            //     {
            //         ssum-=a[l];
            //         l++;
            //     }
            // }
            // if (ssum == k)
            // {
            //     int len = r-l+1;
            //     ans = max(len, ans);
            //     cout << l << " " << r << endl;

            //     if (a[r+1] == 0)
            //     {
            //         r++;
            //         while(a[r] == 0)
            //         {
            //             r++;
            //         }
            //         int len = r-l;
            //         ans = max(len, ans);
            //         cout << l << " " << r << endl;

            //     }
            // }
        }
        r++;
    }
    cout << n-ans << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t=1;
    cin >> t;
    while(t--)
        boom();
    return 0;
}