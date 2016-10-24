//
//  main.c
//  3-6
//
//  Created by 顾梦寅Joyce on 16/10/24.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int i;
    unsigned long t=1;
    for(i=1;i<=10;i++)
        t=t*i;
        printf("10的阶乘＝%lu\n",t);
    return 0;
}
