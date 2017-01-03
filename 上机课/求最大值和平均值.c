//
//  main.c
//  求最大值和平均值
//
//  Created by 顾梦寅Joyce on 2017/1/3.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int m,j,sum=0,k,temp;
        double average;
        scanf("%d",&m);
        int var[m];
        for (j=0; j<m; j++) {
            scanf("%d",&var[j]);
            sum=sum+var[j];
        }
        for (j=0; j<m; j++) {
            for (k=0; k<m-j-1; k++) {
                if (var[k]<var[k+1]) {
                    temp=var[k];
                    var[k]=var[k+1];
                    var[k+1]=temp;
                }
            }
        }
        average=sum/m;
        printf("%d %.2f\n",var[0],average);
    }
    return 0;
}
