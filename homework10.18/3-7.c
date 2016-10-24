//
//  main.c
//  3-7
//
//  Created by 顾梦寅Joyce on 16/10/24.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int i,j;
    unsigned long s=0;
    unsigned long t;
    for(i=1;i<=10;i++)
    {
        t=1;
        for(j=1;j<=i;j++)
            t=t*j;
        printf("%d!=%lu\n",i,t);
        s=s+1/t;
    }
    printf("s=%lu\n",s);
    return 0;
}
