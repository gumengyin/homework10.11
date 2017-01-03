//
//  main.c
//  最大字母
//
//  Created by 顾梦寅Joyce on 2017/1/3.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    char a[100],max,i;
    gets(a);
    max=a[0];
    for (i=0; i<strlen(a); i++) {   //不排序求最大值
        if (max<a[i]) {
            max=a[i];
        }
    }
    for (i=0; i<strlen(a); i++) {   //不排序求最大值
        if (max!=a[i]) {
            printf("%c",a[i]);
        }
        else
            printf("%c(SCU)",a[i]);
    }
    printf("\n");
    return 0;
}
