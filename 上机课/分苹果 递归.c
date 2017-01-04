//
//  main.c
//  分苹果 递归
//
//  Created by 顾梦寅Joyce on 2017/1/4.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int apple(int n){
    int m=n;
    if (n==1) {
        static int i=0;
        do{
            i++;
        }while (i%(m-1)!=0);
        return (i+1);   //平分后多出一条
    }
    else{
        int t;
        do{
            t=apple(n-1);
        }while (t%(m-1)!=0);  //醒来后拿走一份即可被n-1整除
        return (t/m*(m+1)+1);
    }
}
int main() {
    int total,n;
    scanf("%d",&n);
    total=apple(n);
    printf("%d\n",total);
    return 0;
}
