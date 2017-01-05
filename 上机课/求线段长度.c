//
//  main.c
//  求线段长度
//
//  Created by 顾梦寅Joyce on 2017/1/3.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    long long digit[n],length=0,diff;
    for (i=0; i<n; i++) {
        scanf("%lld",&digit[i]);
    }
    for (i=0; i<n-1; i++) {
        for (j=i+1; j<n; j++) {
            diff=digit[j]-digit[i];
            if (diff<0) {
                diff=-diff;
            }
            length=length+diff;
        }
    }
    printf("%lld\n",length);
    return 0;
}
