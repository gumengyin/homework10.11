//
//  main.c
//  3-1
//
//  Created by 顾梦寅Joyce on 16/10/19.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int main(void) {
    int a,b,c;
    printf("请将三个实数输入到变量a,b,c\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if (a+b>c&&a+c>b&&b+c>a){
        printf("三角形周长为%d",a+b+c);
    }
    else{
        printf("不能构成三角形");
    }
    return 0;
}
