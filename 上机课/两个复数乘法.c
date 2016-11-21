//
//  main.c
//  两个复数乘法
//
//  Created by 顾梦寅Joyce on 2016/11/21.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main(void) {
    int n,i;
    int a,b,c,d,x,y;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        x=(a*c)-(b*d);
        y=(c*b)+(a*d);
        printf("%d %d\n",x,y);
    }
    return 0;
}
