//
//  main.c
//  3-2(version2)
//
//  Created by 顾梦寅Joyce on 16/10/23.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//注意命名的浮点数最好有小数位

#include <stdio.h>
int main(void)
{
    double a;
    printf("请输入成绩\n");
    scanf("%lf",&a);
    if (90.0<=a&&a<=100.0)
    {
        printf("A\n");
    }
    else if (80.0<=a&&a<=89.0)
    {
        printf("B\n");
    }
    else if (70.0<=a&&a<=79.0)
    {
        printf("C\n");
    }
    else if (60.0<=a&&a<=69.0)
    {
        printf("D\n");
    }
    else
    {
        printf("E\n");
    }
    return 0;
    
}
