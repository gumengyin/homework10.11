//
//  main.c
//  3-14
//
//  Created by 顾梦寅Joyce on 16/10/25.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//闰年：4整除并且100不整除 或 400整除

#include <stdio.h>

int main(void) {
    int a,b=0;
    for(a=2000;a<=3000;a++)
    {
        if((a%4==0&&a%100!=0)||(a%400==0))
            printf("%d是闰年\n",a);
            b=b+1;
    }
    printf("2000-3000年间的闰年数%d\n",b);
    return 0;
}
