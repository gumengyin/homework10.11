//
//  main.c
//  4-11
//
//  Created by 顾梦寅Joyce on 2016/11/2.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int Prime(int n);
int main(void) {
    int n,x;
    printf("please input a number\n");
    scanf("%d",&n);
    x=Prime(n);
    printf("%d\n",x);
    return 0;
}
int Prime(int n){
    int i;
    for (i=2; i<n; i++) {
        if(n%i==0)
            break;
    }
    if (n!=i)
        return 0;
    else
        return 1;
}
