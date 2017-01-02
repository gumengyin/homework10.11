//
//  main.c
//  求矩阵对角线元素之和
//
//  Created by 顾梦寅Joyce on 2017/1/2.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int a[5][5],j,sum=0,k=0;
        for (j=0; j<5; j++) {
            scanf("%d%d%d%d%d",&a[j][0],&a[j][1],&a[j][2],&a[j][3],&a[j][4]);
        }
        for (j=0; j<5; j++) {
            sum=a[j][k]+sum;
            k=k+1;
        }
        k=0;
        for (j=4; j>=0; j--) {
            sum=a[j][k]+sum;
            k=k+1;
        }
        printf("%d\n",sum-a[2][2]);
    }
    return 0;
}
