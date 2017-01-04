//
//  main.c
//  分苹果 解决超时问题
//
//  Created by 顾梦寅Joyce on 2017/1/5.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//
/*
#include <stdio.h>
int main(){
    int n,x,j,m=0;
    scanf("%d",&n);
    x=n;
    int a[n+1];
    for(a[0]=x;;a[0]++){
        for (j=0; j<=x; j++) {
            a[j+1]=(x-1)*(a[j]-1)/x;
        }
        for (j=0; j<x; j++) {
            if(a[j]%x==1)
                m=m+1;
        }
        if (m==x) {
            printf("%d\n",a[0]);
            break;
        }
    }
    return 0;
}*/
/*#include <stdio.h>

int main(void)
{
    int i=0,x=1;
    float y=5*x+1;
    for(;i<5;++i)
    {
        y=5*y/4+1;
        if(y!=(int)y)
        {
            x+=1;
            y=5*x+1;
            i=0;
        }
    }
    printf("y=%d\n",(int)y);
    return 0;
}*/
#include "stdio.h"


int main()
{
    int fish[10],i,j,k;
    for (j=4;;j++)//试值
    {
        fish[0]=j; //fish[0]为所有人都走了以后剩下的鱼数
        int count=0; //count记录整数项的数目
        for (i=0;i<5;i++)
        {
            if (fish[i]/4*4==fish[i])
            {
                count++;
            }
            fish[i+1]=5*fish[i]/4+1;
        }
        if (count==5) //满足题目条件，即保证了所有人醒来时看到的鱼都能整除5（此题为逆推，注意其中的转化）
        {
            for (k=i;k>0;k--)
            {
                printf("%d\n",fish[k]);
            }
            
            break;
        }
    }
    return 0;
}
