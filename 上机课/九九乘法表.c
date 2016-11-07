//
//  main.c
//  九九乘法表
//
//  Created by 顾梦寅Joyce on 2016/11/7.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main(void) {
    int i,j;
    for (i=1; i<10; i++) {
        for (j=1; j<=i; j++) {
            printf("%d*%d=%d ",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
