//
//  main.c
//  找回文数 方法2
//
//  Created by 顾梦寅Joyce on 2017/1/3.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int m,k,j,b=0;
        scanf("%d%d",&m,&k);
        int var[k];
        for(j=m+1;j<=10000;j++)  //在很多数字中判断是否为回文数 找回文数
        {
            int sum=0,a=j;
            while (a) {          //看逆序数是否和原数相等
                sum=sum*10+a%10;
                a/=10;
            }
            if (sum==j) {
                var[b]=j;
                b=b+1;
            }
            if (b==k) {
                break;
            }
        }
        for (j=0; j<k-1; j++) {
            printf("%d ",var[j]);
        }
        printf("%d\n",var[k-1]);
    }
    return 0;
}
