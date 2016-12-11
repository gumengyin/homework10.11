//
//  main.c
//  5-10
//
//  Created by 顾梦寅Joyce on 2016/12/11.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main() {
    int i;
    char a[12]="hello world";
    for (i=0; i<12; i++) {
        char *p=&a[i];
        puts(p);
    }
    return 0;
}
//char *p这种声明只能指向一个字符，不可能指向一个字符串
//char *p="hello world"只能取首地址 用printf("%s",p)[为什么这里p前不加*]或者puts(p)可以将字符串输出
//定义 字符串数组要用二维数组
//带*表示的那个内存地址储存的值 不带*表示那个内存的地址
