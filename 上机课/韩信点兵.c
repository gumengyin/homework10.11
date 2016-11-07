//
//  main.c
//  韩信点兵，多多益善
//
//  Created by 顾梦寅Joyce on 2016/11/7.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.


//写法一：算出来

#include <stdio.h>
int main(void) {
    int a,b,c,d,x,i;
    scanf("%d",&a);
    for (i=0; i<a;i++ ) {
        scanf("%d %d %d",&b,&c,&d);
        x=b*70+c*21+d*15;
        while (x>100) {
            x=x-105;
        }
        if (x>=10&&x<=100) {
            printf("%d\n",x);
        }
    }
    return 0;
}
/*写法2:找出来
 #include<stdio.h>

int main(void)
{
    int i,n,j,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        for (j=10;j<=100;j++)
        {
            if (j%3==a&&j%5==b&&j%7==c)
            {
                printf("%d\n",j);
                break;
            }
        }
    }
    return 0;
}
*/
