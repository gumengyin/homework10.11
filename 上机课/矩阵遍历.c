//
//  main.c
//  矩阵遍历
//
//  Created by 顾梦寅Joyce on 2017/1/3.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int s,n;
    scanf("%d%d",&s,&n);
    int i,j,var[s][n];
    for (i=0; i<s; i++) {
        for (j=0; j<n; j++) {
            scanf("%d",&var[i][j]);
        }
    }
    for (i=0; i<s; i++) {
        for (j=0; j<n; j++) {
            printf("%d ",var[i][j]);
        }
        printf("\n");
    }
    int k=0,m,sum=s*n;
    j=0,i=0;
    while (k!=sum) {
        for (m=0; m<s; m++) {
            while (j<s) {
                printf("%d",var[j][m]);
                j++;
                k++;
            }
            break;
        }
        s=s-1;
        for (m=0; m<s; m++) {
            while (i<n) {
                printf("%d",var[j][i]);
                i++;
                k++;
            }
            break;
        }
        n=n-1;
    }
    return 0;
}
