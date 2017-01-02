//
//  main.c
//  求矩阵乘积
//
//  Created by 顾梦寅Joyce on 2017/1/2.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int j,k=0;
        int a[3][3],b[3][3],c[3][3];   //[] []对应行 列
        for (j=0; j<3; j++) {
            scanf("%d%d%d",&a[j][0],&a[j][1],&a[j][2]);
        }
        for (j=0; j<3; j++) {
            scanf("%d%d%d",&b[j][0],&b[j][1],&b[j][2]);
        }
        for (j=0; j<3; j++) {
            for (k=0; k<3; k++) {
                c[j][k]=a[j][0]*b[0][k]+a[j][1]*b[1][k]+a[j][2]*b[2][k];
            }
        }
        for (j=0; j<3; j++) {
            printf("%d %d %d\n",c[j][0],c[j][1],c[j][2]);
        }
    }
    return 0;
}
