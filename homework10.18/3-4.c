//
//  main.c
//  3-4
//
//  Created by 顾梦寅Joyce on 16/10/23.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main(void) {
    int a=0;
    char ch;
    printf("请输入一串字符\n");
    ch=getchar();
    while(ch!='\n')
    {
        if(ch>=48&&ch<=57)
        a=a+1;
        ch=getchar();
    }
    printf("数字个数为%d",a);
    return 0;
}
