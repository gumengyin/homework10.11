//
//  main.c
//  用递归算年龄
//
//  Created by 顾梦寅Joyce on 2016/11/14.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.
//

#include <stdio.h>
int Sum(int n,int a,int k){
    if (n>1) {
        return Sum(n-1,a,k)+k;
    }
    else
        return a;
}
int main(void) {
    int n,a,k;
    scanf("%d %d %d",&n,&a,&k);
    if (k>0&&k<=100&&n>=2){
        printf("%d\n",Sum(n,a,k));
    }
    else
        printf("Wrong Number\n");
    return 0;
}

