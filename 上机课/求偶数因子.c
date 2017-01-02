//
//  main.c
//  求偶数因子
//
//  Created by 顾梦寅Joyce on 2017/1/2.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int m,j,flag=0;
        scanf("%d",&m);
        for (j=1; j<=m; j++) {
            if (j%2==0&&m%j==0) {
                flag=1;
                printf("%d ",j);
            }
        }
        if (flag) {
            printf("\n");
        }
        if (flag==0) {
            printf("%d has no even factors\n",m);
        }
    }
    return 0;
}
