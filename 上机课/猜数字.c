//
//  main.c
//  猜数字
//
//  Created by 顾梦寅Joyce on 2016/12/19.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b,c,n,x,i,flag;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d %d %d",&a,&b,&c);
        flag=0;
        for (x=1000; x<=9999; x++) {
            if ((x%a==0)&&((x+1)%b==0)&&((x+2)%c==0)){
                printf("%d\n",x);
                flag=1;
            }
            else
                continue;
        }
        if (flag==0) {
            printf("Impossible\n");
        }
    }
    return 0;
}
