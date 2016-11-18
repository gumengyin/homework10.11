//
//  main.c
//  5-6
//
//  Created by 顾梦寅Joyce on 2016/11/16.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>

int main(void) {
    float a[10];
    int i;
    float x=0;
    for (i=0; i<10; i++) {
        scanf("%f",&a[i]);
    }
    for (i=0; i<10; i++) {
        x=x+(1/a[i]);
    }
    printf("%f",x);
    return 0;
}
