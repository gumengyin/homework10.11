//
//  main.c
//  算数字二进制中的0个数
//
//  Created by 顾梦寅Joyce on 2016/11/1.
//  Copyright © 2016年 顾梦寅Joyce. All rights reserved.

#include <stdio.h>
int main() {
    int a,s=0;
    scanf("%d",&a);
    while(a!=0)
    {
        if(a%2==0)
        {
            a=a/2;
            s=s+1;
        }
        else
        {
            a=(a-1)/2;
        }
    }
    printf("%d",s);
    return 0;
    
}
    
    
