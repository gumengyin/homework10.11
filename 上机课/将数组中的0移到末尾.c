//
//  main.c
//  将数组中的0移到末尾
//
//  Created by 顾梦寅Joyce on 2017/1/2.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int m,j=0,temp,k;
        scanf("%d",&m);
        int a[m];
        for (j=0; j<m; j++) {
            scanf("%d",&a[j]);
        }
        for (j=0; j<m; j++) {
            if (a[j]==0) {
                for (k=j; k<m-1; k++) {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        for (j=0; j<m; j++) {
            printf("%d",a[j]);
        }
    }
    return 0;
}
