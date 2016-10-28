//
//  main.c
//  3-15
//
//  Created by 顾梦寅Joyce on 16/10/25.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>

int main(void) {
    double a,s;
    a=0;
    int i=0;//注意把条件的初始赋值写在do循环外
    do
    {
        s=a+5000;
        a=s+0.32*s;
        i=i+1;
    }while (s<=600000||a<=600000); //注意分号;while成立则循环
    {
        printf("需要%d年\n",i/4);
    }
    return 0;
}
