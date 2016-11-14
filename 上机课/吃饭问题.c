//
//  main.c
//  吃饭问题
//
//  Created by 顾梦寅Joyce on 2016/11/14.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main(void) {
    int n,i;
    int x,y;
    int a,b,c;
    scanf("%d\n",&n);
    for (i=0; i<n ; i++) {
        scanf("%d%d",&x,&y);
        for (a=0;a<=x; a++) {
            for (b=0; b<=x; b++) {
                for (c=0; c<=x; c++) {
                    if((a+b+c==x)&&(3*a+2*b+c==y)){
                        printf("%d %d %d\n",a,b,c);
                    }
                }
            }
        }
    }
    return 0;
}

