//
//  main.c
//  3-2
//
//  Created by 顾梦寅Joyce on 16/10/22.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.

//reason for failure:不能连续判断90<=a<=100应为90<=a&&a<=100

#include <stdio.h>
int main(void)
{
    double a;
    printf("请输入成绩\n");
    scanf("%lf",&a);
    if (90<=a&&a<=100)
    {
        printf("A\n");
    }
    else
    {
        if (80<=a&&a<=89)
        {
            printf("B\n");
        }
        else
        {
            if (70<=a&&a<=79)
            {
                printf("C\n");
            }
            else
            {
                if (60<=a&&a<=69)
                {
                    printf("D\n");
                }
                else
                {
                    printf("E\n");
                }
            }
            
        }
    }

}
