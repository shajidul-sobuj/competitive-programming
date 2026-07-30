/**
 * Platform: AtCoder
 * Problem: abc430 a
 * Contest: ABC430
 * URL: N/A
 * Synced via SyncForge Extension
 */

#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (c>=a && d<b){
        printf("Yes\n");
    }else {
        printf("No\n");
    }
    return 0;
}



