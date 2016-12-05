//
//  main.c
//  累加表达式求值
//
//  Created by 顾梦寅Joyce on 2016/12/5.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for (i=0; i<n ; i++) {
        int m,product,sum=0;
        scanf("%d",&m);
        for (j=1; j<m; j++) {
            product=j*(j+1)*(j+2);
            sum=sum+product;
        }
        printf("%d\n",sum);
    }
    return 0;
}
