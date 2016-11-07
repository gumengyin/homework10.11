//
//  main.c
//  4-16
//
//  Created by 顾梦寅Joyce on 2016/11/6.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int Fun(int n);
int main(void){
    int n;
    printf("please input a number\n");
    scanf("%d",&n);
    Fun(n);
    return 0;
}
int Fun(int n){
    int a,c=0;
    double b=0.1;//注意数据类型
    if (n<8) {
        c=n;
    }
    else{
        while (n!=0) {
            a=n%8;
            b=10*b;
            n=n/8;
            c=a*b+c;
        }
    }
    printf("%d\n",c);
    return 0;
}
