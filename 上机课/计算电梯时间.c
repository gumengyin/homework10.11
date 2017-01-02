//
//  main.c
//  计算电梯时间
//
//  Created by 顾梦寅Joyce on 2017/1/2.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int m,t=0;
        scanf("%d",&m);
        int f[m],j;
        for (j=0; j<m; j++) {
            scanf("%d",&f[j]);
        }
        for (j=0; j<m; j++) {
            if (j==0) {
                t=6*f[j]+5;
            }
            if (f[j]>f[j-1]&&j>0) {
                t=t+6*(f[j]-f[j-1])+5;
            }
            if (f[j]<f[j-1]&&j>0) {
                t=t+4*(f[j-1]-f[j])+5;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}
