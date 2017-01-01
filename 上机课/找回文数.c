//
//  main.c
//  找回文数
//
//  Created by 顾梦寅Joyce on 2017/1/1.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        int a,b,var,j;
        scanf("%d%d",&a,&b);
        a=a/10;
        var=a%10;
        a=a/10;
        for (j=0; j<b; j++) {
            printf("%d\n",a*100+(var+j)*10+a);
        }
    }
    return 0;
}
