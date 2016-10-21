//
//  main.c
//  3-2
//
//  Created by 顾梦寅Joyce on 16/10/22.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.

//失败了不能正常运行

#include <stdio.h>
int main(void)
{
    double a;
    printf("请输入成绩\n");
    scanf("%lf",&a);
    if (90<=a<=100)
    {
        printf("A\n");
    }
    else
    {
        if (80<=a<=89)
        {
            printf("B\n");
        }
        else
        {
            if (70<=a<=79)
            {
                printf("C\n");
            }
            else
            {
                if (60<=a<=69)
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
