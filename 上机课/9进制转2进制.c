//
//  main.c
//  将9进制转为2进制
//
//  Created by 顾梦寅Joyce on 2016/12/1.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i,j,a[50];
    scanf("%d",&n);
    for (i=0; i<n; i++){
        int x,m,t=0,digit=0;
        scanf("%d",&x);
        while (x!=0) {
            m=x%10;
            x=x/10;
            for (j=0; j<t; j++) {
                m=m*9;
            }
            t++;
            digit=digit+m;
        }
        t=0;
        while (digit!=0) {
            a[t]=digit%2;
            digit=digit/2;
            t++;
        }
        for (j=t-1; j>=0; j--) {     //for的新用法 并且思考若j换成i为什么跳不出程序
            printf("%d",a[j]);
        }
        printf("\n");
    }
    return 0;
}
