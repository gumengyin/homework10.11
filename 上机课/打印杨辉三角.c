//
//  main.c
//  打印杨辉三角
//
//  Created by 顾梦寅Joyce on 2017/1/3.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
void FUN (int m){
    int i,j;
    int tri[15][15];
    for (i=0; i<m; i++) {
        for (j=0; j<m; j++) {
            if (j==0||j==i) {
                tri[i][j]=1;
            }
            else
                tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
        }
    }
    for (i=0; i<m; i++) {
        for(j=0;j<=i;j++) {
            printf("%d ",tri[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int m;
        scanf("%d",&m);
        FUN(m);
    }
    return 0;
}

