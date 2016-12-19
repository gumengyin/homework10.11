//
//  main.c
//  排序
//
//  Created by 顾梦寅Joyce on 2016/12/19.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,m,i,j,var;
    scanf("%d%d",&n,&m);
    int a[n];
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n-i; j++) {
            if (a[i]<a[i+1]) {
                var=a[i];
                a[i]=a[i+1];
                a[i+1]=var;
            }
        }
    }
    for (i=0; i<m; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
