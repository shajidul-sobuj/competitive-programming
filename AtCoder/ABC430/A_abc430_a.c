/**
 * Platform: AtCoder
 * Contest: ABC430
 * Problem: A - abc430 a
 * Language: C23 (Clang 21.1.0)
 * Date: 2026-07-26 21:33:53
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



