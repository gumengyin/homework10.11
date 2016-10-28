//
//  main.c
//  3-5
//
//  Created by 顾梦寅Joyce on 16/10/24.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.



//老师的版本为什么可以

#include <stdio.h>

int main(void) {
    int a,b;
    for(a=2;a<=100;a++)
    {
        if(a==2)
            printf("%d是素数\n",a);
        else
        for(b=2;b<a;b++)
        {
        if(a%b==0)
        {
            break;
        }
            if(b==a-1)//为什么不能写成 (a=2)||(b==a-1)
            printf("素数%d\n",a);//假如if判断不是素数,可以在此条件下不显示结果不执行吗（只想要素数)
        }
    }
    return 0;
}
