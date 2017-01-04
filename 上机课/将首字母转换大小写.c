//
//  main.c
//  将首字母转换大小写
//
//  Created by 顾梦寅Joyce on 2017/1/4.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    gets(a);
    int i;
    for (i=0; i<strlen(a); i++) {
        if (i==0||a[i-1]==' ') {
            if( a[i]>='a' && a[i]<='z')
                a[i]=a[i]-32;
        }
    }
    printf("%s\n",a);
    return 0;
}
