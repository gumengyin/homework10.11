//
//  main.c
//  4-12
//
//  Created by 顾梦寅Joyce on 2016/11/4.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//
#include <stdio.h>
int Even(int n);
int main(void) {
    int n,x;
    printf("please input a number\n");
    scanf("%d",&n);
    x=Even(n);
    printf("%d\n",x);
    return 0;
}
int Even(int n){
    if (n%2==0&&n>=0)
        return 1;
    else
        return 0;
}

