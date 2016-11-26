//
//  main.c
//  输出字符中整数
//
//  Created by 顾梦寅Joyce on 2016/11/26.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void put(char str[]);
int main() {
    char str[100];
    while (gets(str)!=NULL) {
        put(str);
    }
    printf("Hello, World!\n");
    return 0;
}
void put(char str[]){
    int i;
    int a=0;
    for (i=0;i<strlen(str);i++) {
        if (str[i]>=48&&str[i]<=57) {
            if ((i==0)||(str[i-1]<48&&str[i-1]>57)) {
                a=a+1;
            }
        }
    }
    printf("%d",a);
}

